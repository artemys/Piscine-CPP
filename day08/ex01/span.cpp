#include "span.hpp"

Span::Span() {}

Span::Span(Span const &rhs) { *this = rhs; }

Span::~Span() {}

Span &
Span::operator=(Span const &) {

    return *this;
}

Span::Span(unsigned int N) : _N(N){
    _container.reserve(_N);
}

void Span::addNumber(int newData) {
    if(_container.size() == _N)
        throw std::runtime_error("Container is already full.");
    _container.push_back(newData);
}

unsigned int Span::shortestSpan() const {
    std::vector<int> cpy = _container;

    if(_container.size() == 1)
        throw std::runtime_error("Container size is 1");
    if(_container.size() == 0)
        throw std::runtime_error("Container size is empty");
    std::sort(cpy.begin(), cpy.end());
    unsigned int buff = UINT_MAX;
    for (std::vector<int>::iterator it =  cpy.begin(); it < cpy.end() - 1; ++it) {

        unsigned int b = abs(*(it + 1) - *it);
        if(b < buff){
            buff =  b;
        }
    }

    return buff;
}

unsigned int Span::longestSpan() const {
    if(_container.size() == 1)
        throw std::runtime_error("Container size is 1");
    if(_container.size() == 0)
        throw std::runtime_error("Container size is empty");
    int min = *std::min_element(_container.begin(), _container.end());
    int max = *std::max_element(_container.begin(), _container.end());

    return std::abs(max - min);
}
