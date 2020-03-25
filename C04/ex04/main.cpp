# include "DeepCoreMiner.hpp"
# include "StripMiner.hpp"
# include "KoalaSteroid.hpp"
# include "AsteroKreog.hpp"
# include "MiningBarge.hpp"
int		main(void)
{
	StripMiner *miner1 = new StripMiner;
	StripMiner *miner3 = new StripMiner;
	StripMiner *miner4 = new StripMiner;
	StripMiner *miner5 = new StripMiner;
	DeepCoreMiner *miner2 = new DeepCoreMiner;
	AsteroKreog	*comet = new AsteroKreog;
	KoalaSteroid *aster = new KoalaSteroid;


	miner1->mine(comet);
	miner2->mine(comet);
	miner1->mine(aster);
	miner2->mine(aster);

	MiningBarge nave;
	std::cout<<"nº laser = "<<nave.getCount()<<std::endl;
	nave.equip(miner1);
	std::cout<<"nº laser = "<<nave.getCount()<<std::endl;
	nave.equip(miner2);
	std::cout<<"nº laser = "<<nave.getCount()<<std::endl;
	nave.equip(miner3);
	std::cout<<"nº laser = "<<nave.getCount()<<std::endl;
	nave.equip(miner4);
	std::cout<<"nº laser = "<<nave.getCount()<<std::endl;
	nave.equip(miner5);
	std::cout<<"nº laser = "<<nave.getCount()<<std::endl;
	nave.mine(comet);
	std::cout<<std::endl;
	nave.mine(aster);

}
