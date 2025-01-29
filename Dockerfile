# Build stage
FROM public.ecr.aws/lts/ubuntu

# Install build dependencies
RUN apt-get update && apt-get install -y \
    wget \
    build-essential \
    cmake \
    ninja-build \
    python3 \
    python3-pip \
    python3-dev \
    python3-venv \
    && rm -rf /var/lib/apt/lists/*

# Install Python dependencies
RUN python3 -m venv /venv &&\
    . /venv/bin/activate &&\
    pip install cython build setuptools wheel

    #Install unity cxx testing framework
RUN mkdir /unity && cd /unity &&\
    wget https://github.com/ThrowTheSwitch/Unity/archive/refs/tags/v2.6.1.tar.gz &&\
    tar xaf v2.6.1.tar.gz &&\
    cp Unity-2.6.1/src/unity* ./ &&\
    rm v2.6.1.tar.gz &&\
    rm -rf Unity-2.6.1

CMD ["bash"]