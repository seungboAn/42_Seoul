#include "span.hpp"

Span::Span()
{
	_size = 0;
}

Span::~Span()
{
	;
}

Span::Span(unsigned int N)
{
	_size = N;
}

Span::Span(Span& copy)
{
	*this = copy;
}

Span& Span::operator = (const Span& span)
{
	if (this == &span)
		return (*this);
	_v = span._v;
	_size = span._size;
	return (*this);
}

void Span::addNumber(int number)
{
	if (_v.size() >= _size)
		throw (FullException());
	_v.push_back(number);
}

int Span::shortestSpan(void) const
{
	if (_v.size() <= 1)
		throw (NoSpanException());
	std::vector<int> spans;
    for (size_t i = 0; i + 1 < _v.size(); i++)
    {
        int span = _v[i] - _v[i + 1];
        if (span < 0)
            span *= -1;
        spans.push_back(span);
    }
    return (*(std::min_element(spans.begin(), spans.end())));
}

int Span::longestSpan(void) const
{
	if (_v.size() <= 1)
		throw (NoSpanException());
	std::vector<int> spans;
    for (size_t i = 0; i + 1 < _v.size(); i++)
    {
        int span = _v[i] - _v[i + 1];
        if (span < 0)
            span *= -1;
        spans.push_back(span);
    }
    return (*(std::max_element(spans.begin(), spans.end())));
}

std::vector<int> Span::getV() const
{
	return (_v);
}

const char * Span::FullException::what() const throw()
{
    return ("Already full!");
}

const char * Span::NoSpanException::what() const throw()
{
    return ("No span to find!");
}