#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
    public:
        Brain();
        Brain(const Brain &brain);
        ~Brain();
        Brain &operator= (const Brain &brain);
        
        std::string getIdea(int idx) const;
        void setIdea(int idx, std::string idea);
        std::string ideas[100];
};

#endif