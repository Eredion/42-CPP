#ifndef ASTEROKREOG_HPP
# define ASTEROKREOG_HPP

# include <iostream>
# include "IAsteroid.hpp"

class AsteroKreog : public IAsteroid
{
	private:
			std::string	Type;
	public:
			AsteroKreog();
			AsteroKreog(const AsteroKreog &copy);
			AsteroKreog	&operator = (const AsteroKreog &copy);
			virtual ~AsteroKreog();
			std::string beMined(DeepCoreMiner *miner) const;
			std::string beMined(StripMiner *miner) const;
			std::string getName() const;
};

#endif

