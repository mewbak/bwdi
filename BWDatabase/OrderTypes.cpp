#include "OrderTypes.h"

#include <BWDI\UnitTypeID.h>

namespace BWDI
{
  namespace OrderTypeIDs
  {
    void fillOrderType(OrderType &actionType, const char* name)
    {
      actionType.name.set(name);
    }

    OrderType actionTypeData[OrderTypeIDs::count];

    void init()
    {
      fillOrderType(actionTypeData[OrderTypeIDs::Die], "Die");
      fillOrderType(actionTypeData[OrderTypeIDs::Stop], "Stop");
      fillOrderType(actionTypeData[OrderTypeIDs::Guard], "Guard");
      fillOrderType(actionTypeData[OrderTypeIDs::PlayerGuard], "PlayerGuard");
      fillOrderType(actionTypeData[OrderTypeIDs::TurretGuard], "TurretGuard");
      fillOrderType(actionTypeData[OrderTypeIDs::BunkerGuard], "BunkerGuard");
      fillOrderType(actionTypeData[OrderTypeIDs::Move], "Move");
      fillOrderType(actionTypeData[OrderTypeIDs::ReaverStop], "ReaverStop");
      fillOrderType(actionTypeData[OrderTypeIDs::Attack1], "Attack1");
      fillOrderType(actionTypeData[OrderTypeIDs::Attack2], "Attack2");
      fillOrderType(actionTypeData[OrderTypeIDs::AttackUnit], "AttackUnit");
      fillOrderType(actionTypeData[OrderTypeIDs::AttackFixedRange], "AttackFixedRange");
      fillOrderType(actionTypeData[OrderTypeIDs::AttackTile], "AttackTile");
      fillOrderType(actionTypeData[OrderTypeIDs::Hover], "Hover");
      fillOrderType(actionTypeData[OrderTypeIDs::AttackMove], "AttackMove");
      fillOrderType(actionTypeData[OrderTypeIDs::InfestMine1], "InfestMine1");
      fillOrderType(actionTypeData[OrderTypeIDs::Nothing1], "Nothing1");
      fillOrderType(actionTypeData[OrderTypeIDs::Powerup1], "Powerup1");
      fillOrderType(actionTypeData[OrderTypeIDs::TowerGuard], "TowerGuard");
      fillOrderType(actionTypeData[OrderTypeIDs::TowerAttack], "TowerAttack");
      fillOrderType(actionTypeData[OrderTypeIDs::VultureMine], "VultureMine");
      fillOrderType(actionTypeData[OrderTypeIDs::StayinRange], "StayinRange");
      fillOrderType(actionTypeData[OrderTypeIDs::TurretAttack], "TurretAttack");
      fillOrderType(actionTypeData[OrderTypeIDs::Nothing2], "Nothing2");
      fillOrderType(actionTypeData[OrderTypeIDs::Nothing3], "Nothing3");
      fillOrderType(actionTypeData[OrderTypeIDs::DroneStartBuild], "DroneStartBuild");
      fillOrderType(actionTypeData[OrderTypeIDs::DroneBuild], "DroneBuild");
      fillOrderType(actionTypeData[OrderTypeIDs::InfestMine2], "InfestMine2");
      fillOrderType(actionTypeData[OrderTypeIDs::InfestMine3], "InfestMine3");
      fillOrderType(actionTypeData[OrderTypeIDs::InfestMine4], "InfestMine4");
      fillOrderType(actionTypeData[OrderTypeIDs::BuildTerran], "BuildTerran");
      fillOrderType(actionTypeData[OrderTypeIDs::BuildProtoss1], "BuildProtoss1");
      fillOrderType(actionTypeData[OrderTypeIDs::BuildProtoss2], "BuildProtoss2");
      fillOrderType(actionTypeData[OrderTypeIDs::ConstructingBuilding], "ConstructingBuilding");
      fillOrderType(actionTypeData[OrderTypeIDs::Repair1], "Repair1");
      fillOrderType(actionTypeData[OrderTypeIDs::Repair2], "Repair2");
      fillOrderType(actionTypeData[OrderTypeIDs::PlaceAddon], "PlaceAddon");
      fillOrderType(actionTypeData[OrderTypeIDs::BuildAddon], "BuildAddon");
      fillOrderType(actionTypeData[OrderTypeIDs::Train], "Train");
      fillOrderType(actionTypeData[OrderTypeIDs::RallyPoint1], "RallyPoint1");
      fillOrderType(actionTypeData[OrderTypeIDs::RallyPoint2], "RallyPoint2");
      fillOrderType(actionTypeData[OrderTypeIDs::ZergBirth], "ZergBirth");
      fillOrderType(actionTypeData[OrderTypeIDs::Morph1], "Morph1");
      fillOrderType(actionTypeData[OrderTypeIDs::Morph2], "Morph2");
      fillOrderType(actionTypeData[OrderTypeIDs::BuildSelf1], "BuildSelf1");
      fillOrderType(actionTypeData[OrderTypeIDs::ZergBuildSelf], "ZergBuildSelf");
      fillOrderType(actionTypeData[OrderTypeIDs::Build5], "Build5");
      fillOrderType(actionTypeData[OrderTypeIDs::Enternyduscanal], "Enternyduscanal");
      fillOrderType(actionTypeData[OrderTypeIDs::BuildSelf2], "BuildSelf2");
      fillOrderType(actionTypeData[OrderTypeIDs::Follow], "Follow");
      fillOrderType(actionTypeData[OrderTypeIDs::Carrier], "Carrier");
      fillOrderType(actionTypeData[OrderTypeIDs::CarrierIgnore1], "CarrierIgnore1");
      fillOrderType(actionTypeData[OrderTypeIDs::CarrierStop], "CarrierStop");
      fillOrderType(actionTypeData[OrderTypeIDs::CarrierAttack1], "CarrierAttack1");
      fillOrderType(actionTypeData[OrderTypeIDs::CarrierAttack2], "CarrierAttack2");
      fillOrderType(actionTypeData[OrderTypeIDs::CarrierIgnore2], "CarrierIgnore2");
      fillOrderType(actionTypeData[OrderTypeIDs::CarrierFight], "CarrierFight");
      fillOrderType(actionTypeData[OrderTypeIDs::HoldPosition1], "HoldPosition1");
      fillOrderType(actionTypeData[OrderTypeIDs::Reaver], "Reaver");
      fillOrderType(actionTypeData[OrderTypeIDs::ReaverAttack1], "ReaverAttack1");
      fillOrderType(actionTypeData[OrderTypeIDs::ReaverAttack2], "ReaverAttack2");
      fillOrderType(actionTypeData[OrderTypeIDs::ReaverFight], "ReaverFight");
      fillOrderType(actionTypeData[OrderTypeIDs::ReaverHold], "ReaverHold");
      fillOrderType(actionTypeData[OrderTypeIDs::TrainFighter], "TrainFighter");
      fillOrderType(actionTypeData[OrderTypeIDs::StrafeUnit1], "StrafeUnit1");
      fillOrderType(actionTypeData[OrderTypeIDs::StrafeUnit2], "StrafeUnit2");
      fillOrderType(actionTypeData[OrderTypeIDs::RechargeShields1], "RechargeShields1");
      fillOrderType(actionTypeData[OrderTypeIDs::Rechargeshields2], "Rechargeshields2");
      fillOrderType(actionTypeData[OrderTypeIDs::ShieldBattery], "ShieldBattery");
      fillOrderType(actionTypeData[OrderTypeIDs::Return], "Return");
      fillOrderType(actionTypeData[OrderTypeIDs::DroneLand], "DroneLand");
      fillOrderType(actionTypeData[OrderTypeIDs::BuildingLand], "BuildingLand");
      fillOrderType(actionTypeData[OrderTypeIDs::BuildingLiftoff], "BuildingLiftoff");
      fillOrderType(actionTypeData[OrderTypeIDs::DroneLiftoff], "DroneLiftoff");
      fillOrderType(actionTypeData[OrderTypeIDs::Liftoff], "Liftoff");
      fillOrderType(actionTypeData[OrderTypeIDs::ResearchTech], "ResearchTech");
      fillOrderType(actionTypeData[OrderTypeIDs::Upgrade], "Upgrade");
      fillOrderType(actionTypeData[OrderTypeIDs::Larva], "Larva");
      fillOrderType(actionTypeData[OrderTypeIDs::SpawningLarva], "SpawningLarva");
      fillOrderType(actionTypeData[OrderTypeIDs::Harvest1], "Harvest1");
      fillOrderType(actionTypeData[OrderTypeIDs::Harvest2], "Harvest2");
      fillOrderType(actionTypeData[OrderTypeIDs::MoveToGas], "MoveToGas");
      fillOrderType(actionTypeData[OrderTypeIDs::WaitForGas], "WaitForGas");
      fillOrderType(actionTypeData[OrderTypeIDs::HarvestGas], "HarvestGas");
      fillOrderType(actionTypeData[OrderTypeIDs::ReturnGas], "ReturnGas");
      fillOrderType(actionTypeData[OrderTypeIDs::MoveToMinerals], "MoveToMinerals");
      fillOrderType(actionTypeData[OrderTypeIDs::WaitForMinerals], "WaitForMinerals");
      fillOrderType(actionTypeData[OrderTypeIDs::MiningMinerals], "MiningMinerals");
      fillOrderType(actionTypeData[OrderTypeIDs::Harvest3], "Harvest3");
      fillOrderType(actionTypeData[OrderTypeIDs::Harvest4], "Harvest4");
      fillOrderType(actionTypeData[OrderTypeIDs::ReturnMinerals], "ReturnMinerals");
      fillOrderType(actionTypeData[OrderTypeIDs::Harvest5], "Harvest5");
      fillOrderType(actionTypeData[OrderTypeIDs::EnterTransport], "EnterTransport");
      fillOrderType(actionTypeData[OrderTypeIDs::Pickup1], "Pickup1");
      fillOrderType(actionTypeData[OrderTypeIDs::Pickup2], "Pickup2");
      fillOrderType(actionTypeData[OrderTypeIDs::Pickup3], "Pickup3");
      fillOrderType(actionTypeData[OrderTypeIDs::Pickup4], "Pickup4");
      fillOrderType(actionTypeData[OrderTypeIDs::Powerup2], "Powerup2");
      fillOrderType(actionTypeData[OrderTypeIDs::SiegeMode], "SiegeMode");
      fillOrderType(actionTypeData[OrderTypeIDs::TankMode], "TankMode");
      fillOrderType(actionTypeData[OrderTypeIDs::WatchTarget], "WatchTarget");
      fillOrderType(actionTypeData[OrderTypeIDs::InitCreepGrowth], "InitCreepGrowth");
      fillOrderType(actionTypeData[OrderTypeIDs::SpreadCreep], "SpreadCreep");
      fillOrderType(actionTypeData[OrderTypeIDs::StoppingCreepGrowth], "StoppingCreepGrowth");
      fillOrderType(actionTypeData[OrderTypeIDs::GuardianAspect], "GuardianAspect");
      fillOrderType(actionTypeData[OrderTypeIDs::WarpingArchon], "WarpingArchon");
      fillOrderType(actionTypeData[OrderTypeIDs::CompletingArchonsummon], "CompletingArchonsummon");
      fillOrderType(actionTypeData[OrderTypeIDs::HoldPosition2], "HoldPosition2");
      fillOrderType(actionTypeData[OrderTypeIDs::HoldPosition3], "HoldPosition3");
      fillOrderType(actionTypeData[OrderTypeIDs::Cloak], "Cloak");
      fillOrderType(actionTypeData[OrderTypeIDs::Decloak], "Decloak");
      fillOrderType(actionTypeData[OrderTypeIDs::Unload], "Unload");
      fillOrderType(actionTypeData[OrderTypeIDs::MoveUnload], "MoveUnload");
      fillOrderType(actionTypeData[OrderTypeIDs::FireYamatoGun1], "FireYamatoGun1");
      fillOrderType(actionTypeData[OrderTypeIDs::FireYamatoGun2], "FireYamatoGun2");
      fillOrderType(actionTypeData[OrderTypeIDs::MagnaPulse], "MagnaPulse");
      fillOrderType(actionTypeData[OrderTypeIDs::Burrow], "Burrow");
      fillOrderType(actionTypeData[OrderTypeIDs::Burrowed], "Burrowed");
      fillOrderType(actionTypeData[OrderTypeIDs::Unburrow], "Unburrow");
      fillOrderType(actionTypeData[OrderTypeIDs::DarkSwarm], "DarkSwarm");
      fillOrderType(actionTypeData[OrderTypeIDs::CastParasite], "CastParasite");
      fillOrderType(actionTypeData[OrderTypeIDs::SummonBroodlings], "SummonBroodlings");
      fillOrderType(actionTypeData[OrderTypeIDs::EmpShockwave], "EmpShockwave");
      fillOrderType(actionTypeData[OrderTypeIDs::NukeWait], "NukeWait");
      fillOrderType(actionTypeData[OrderTypeIDs::NukeTrain], "NukeTrain");
      fillOrderType(actionTypeData[OrderTypeIDs::NukeLaunch], "NukeLaunch");
      fillOrderType(actionTypeData[OrderTypeIDs::NukePaint], "NukePaint");
      fillOrderType(actionTypeData[OrderTypeIDs::NukeUnit], "NukeUnit");
      fillOrderType(actionTypeData[OrderTypeIDs::NukeGround], "NukeGround");
      fillOrderType(actionTypeData[OrderTypeIDs::NukeTrack], "NukeTrack");
      fillOrderType(actionTypeData[OrderTypeIDs::InitArbiter], "InitArbiter");
      fillOrderType(actionTypeData[OrderTypeIDs::CloakNearbyUnits], "CloakNearbyUnits");
      fillOrderType(actionTypeData[OrderTypeIDs::PlaceMine], "PlaceMine");
      fillOrderType(actionTypeData[OrderTypeIDs::Rightclickaction], "Rightclickaction");
      fillOrderType(actionTypeData[OrderTypeIDs::SapUnit], "SapUnit");
      fillOrderType(actionTypeData[OrderTypeIDs::SapLocation], "SapLocation");
      fillOrderType(actionTypeData[OrderTypeIDs::HoldPosition4], "HoldPosition4");
      fillOrderType(actionTypeData[OrderTypeIDs::Teleport], "Teleport");
      fillOrderType(actionTypeData[OrderTypeIDs::TeleporttoLocation], "TeleporttoLocation");
      fillOrderType(actionTypeData[OrderTypeIDs::PlaceScanner], "PlaceScanner");
      fillOrderType(actionTypeData[OrderTypeIDs::Scanner], "Scanner");
      fillOrderType(actionTypeData[OrderTypeIDs::DefensiveMatrix], "DefensiveMatrix");
      fillOrderType(actionTypeData[OrderTypeIDs::PsiStorm], "PsiStorm");
      fillOrderType(actionTypeData[OrderTypeIDs::Irradiate], "Irradiate");
      fillOrderType(actionTypeData[OrderTypeIDs::Plague], "Plague");
      fillOrderType(actionTypeData[OrderTypeIDs::Consume], "Consume");
      fillOrderType(actionTypeData[OrderTypeIDs::Ensnare], "Ensnare");
      fillOrderType(actionTypeData[OrderTypeIDs::StasisField], "StasisField");
      fillOrderType(actionTypeData[OrderTypeIDs::Hallucination1], "Hallucination1");
      fillOrderType(actionTypeData[OrderTypeIDs::Hallucination2], "Hallucination2");
      fillOrderType(actionTypeData[OrderTypeIDs::ResetCollision1], "ResetCollision1");
      fillOrderType(actionTypeData[OrderTypeIDs::ResetCollision2], "ResetCollision2");
      fillOrderType(actionTypeData[OrderTypeIDs::Patrol], "Patrol");
      fillOrderType(actionTypeData[OrderTypeIDs::CTFCOPInit], "CTFCOPInit");
      fillOrderType(actionTypeData[OrderTypeIDs::CTFCOP1], "CTFCOP1");
      fillOrderType(actionTypeData[OrderTypeIDs::CTFCOP2], "CTFCOP2");
      fillOrderType(actionTypeData[OrderTypeIDs::ComputerAI], "ComputerAI");
      fillOrderType(actionTypeData[OrderTypeIDs::AtkMoveEP], "AtkMoveEP");
      fillOrderType(actionTypeData[OrderTypeIDs::HarassMove], "HarassMove");
      fillOrderType(actionTypeData[OrderTypeIDs::AIPatrol], "AIPatrol");
      fillOrderType(actionTypeData[OrderTypeIDs::GuardPost], "GuardPost");
      fillOrderType(actionTypeData[OrderTypeIDs::RescuePassive], "RescuePassive");
      fillOrderType(actionTypeData[OrderTypeIDs::Neutral], "Neutral");
      fillOrderType(actionTypeData[OrderTypeIDs::ComputerReturn], "ComputerReturn");
      fillOrderType(actionTypeData[OrderTypeIDs::InitPsiProvider], "InitPsiProvider");
      fillOrderType(actionTypeData[OrderTypeIDs::SelfDestrucing], "SelfDestrucing");
      fillOrderType(actionTypeData[OrderTypeIDs::Critter], "Critter");
      fillOrderType(actionTypeData[OrderTypeIDs::HiddenGun], "HiddenGun");
      fillOrderType(actionTypeData[OrderTypeIDs::OpenDoor], "OpenDoor");
      fillOrderType(actionTypeData[OrderTypeIDs::CloseDoor], "CloseDoor");
      fillOrderType(actionTypeData[OrderTypeIDs::HideTrap], "HideTrap");
      fillOrderType(actionTypeData[OrderTypeIDs::RevealTrap], "RevealTrap");
      fillOrderType(actionTypeData[OrderTypeIDs::Enabledoodad], "Enabledoodad");
      fillOrderType(actionTypeData[OrderTypeIDs::Disabledoodad], "Disabledoodad");
      fillOrderType(actionTypeData[OrderTypeIDs::Warpin], "Warpin");
      fillOrderType(actionTypeData[OrderTypeIDs::Medic], "Medic");
      fillOrderType(actionTypeData[OrderTypeIDs::MedicHeal1], "MedicHeal1");
      fillOrderType(actionTypeData[OrderTypeIDs::HealMove], "HealMove");
      fillOrderType(actionTypeData[OrderTypeIDs::MedicHoldPosition], "MedicHoldPosition");
      fillOrderType(actionTypeData[OrderTypeIDs::MedicHeal2], "MedicHeal2");
      fillOrderType(actionTypeData[OrderTypeIDs::Restoration], "Restoration");
      fillOrderType(actionTypeData[OrderTypeIDs::CastDisruptionWeb], "CastDisruptionWeb");
      fillOrderType(actionTypeData[OrderTypeIDs::CastMindControl], "CastMindControl");
      fillOrderType(actionTypeData[OrderTypeIDs::WarpingDarkArchon], "WarpingDarkArchon");
      fillOrderType(actionTypeData[OrderTypeIDs::CastFeedback], "CastFeedback");
      fillOrderType(actionTypeData[OrderTypeIDs::CastOpticalFlare], "CastOpticalFlare");
      fillOrderType(actionTypeData[OrderTypeIDs::CastMaelstrom], "CastMaelstrom");
      fillOrderType(actionTypeData[OrderTypeIDs::JunkYardDog], "JunkYardDog");
      fillOrderType(actionTypeData[OrderTypeIDs::Fatal], "Fatal");

    }
  }
}
