#ifndef SPAN_HPP
 # define SPAN_HPP
 # include <iostream>
 # include <vector>

class Span {
public:
    /*      COPLIEN             */
    Span();
    virtual ~Span();
    Span(Span const &);
    Span &operator=(Span const &);

    /*       CONSTRUCTOR        */
    Span(unsigned int);

    /*       FUNC               */
    void            addNumber(int);
    unsigned int    shortestSpan() const;
    unsigned int    longestSpan() const;

private:
    unsigned int               _N;
    std::vector<int>           _container;
};

#endif /* SPAN_HPP */
