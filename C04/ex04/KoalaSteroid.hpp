#ifndef KOALASTEROID_HPP
# define KOALASTEROID_HPP

# include "IAsteroid.hpp"

class KoalaSteroid : public IAsteroid
{
	private:
			std::string	Type;
	public:
			KoalaSteroid();
			KoalaSteroid(const KoalaSteroid &copy);
			KoalaSteroid	&operator = (const KoalaSteroid &copy);
			virtual ~KoalaSteroid();
			std::string beMined(DeepCoreMiner *miner) const;
			std::string beMined(StripMiner *miner) const;
			std::string getName() const;
};

#endif

