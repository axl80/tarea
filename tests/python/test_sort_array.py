import unittest
import sort_array

class TestSortArray(unittest.TestCase):
    def test_positive_numbers(self):
        data = [5, 2, 9, 1, 5, 6]
        sort_array.py_sort_array(data)
        self.assertEqual(data, [1, 2, 5, 5, 6, 9])

    def test_negative_numbers(self):
        data = [-3, -1, -4, -1, -5]
        sort_array.py_sort_array(data)
        self.assertEqual(data, [-5, -4, -3, -1, -1])

    def test_mixed_numbers(self):
        data = [3, -1, 4, -2, 0]
        sort_array.py_sort_array(data)
        self.assertEqual(data, [-2, -1, 0, 3, 4])

    def test_empty_list(self):
        data = []
        sort_array.py_sort_array(data)
        self.assertEqual(data, [])  # Sorting an empty list should result in an empty list

    def test_single_element(self):
        data = [42]
        sort_array.py_sort_array(data)
        self.assertEqual(data, [42])  # A single-element list should remain unchanged

    def test_non_integer_elements(self):
        data = [5, "string", 9]
        with self.assertRaises(TypeError):
            sort_array.py_sort_array(data)  # Should raise a TypeError for non-integer elements

if __name__ == '__main__':
    unittest.main()