#include <iostream>

template <typename T>
class Table {
public:

    Table(const int rows, const int cols) : m_rows(rows), m_cols(cols), m_data(rows, std::vector<T>(cols))
        {}

    const std::vector<T>& operator[](const int index) const {
        return m_data[index];
    }

    std::vector<T>& operator[](const int index) {
        return m_data[index];
    }

    int Size() const {
        return m_rows * m_cols;
    }

private:
    int m_rows;
    int m_cols;
    std::vector<std::vector<T>> m_data;
};


int main()
{
    auto test = Table<int>(2, 4);
    test[0][0] = 4;
    std::cout << test[0][0];
}
