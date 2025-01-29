# Build stage
FROM public.ecr.aws/lts/ubuntu

# Install build dependencies
RUN apt-get update && apt-get install -y \
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
    pip install cython build wheel setuptools

COPY . /ci
WORKDIR /ci
CMD ["bash"]