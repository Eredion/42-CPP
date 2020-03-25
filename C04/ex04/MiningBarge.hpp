#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class MiningBarge
{
	private:
			IMiningLaser	*Equip[4];
			int				Count;
	public:
			MiningBarge();
			~MiningBarge();
			MiningBarge	&operator = (MiningBarge const &copy);
			MiningBarge(MiningBarge const &copy);
			void	equip(IMiningLaser *laser);
			void	mine(IAsteroid *target) const;
			int		getCount() const;
};

#endif
