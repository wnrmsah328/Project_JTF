#include "Project_JTFGameModeBase.h"

AProject_JTFGameModeBase::AProject_JTFGameModeBase()
{
	ConstructorHelpers::FClassFinder<APawn> asset(L"Blueprint'/Game/01_Player/BP_Recruit.BP_Recruit_C'");
	DefaultPawnClass = asset.Class;
}
