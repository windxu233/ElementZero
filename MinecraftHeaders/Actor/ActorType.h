#pragma once

#include "../dll.h"
#include <functional>

enum class ActorType {
  Undefined_2          = 0x1,
  TypeMask             = 0xFF,
  Mob                  = 0x100,
  PathfinderMob        = 0x300,
  Monster              = 0xB00,
  Animal               = 0x1300,
  TamableAnimal        = 0x5300,
  Ambient              = 0x8100,
  UndeadMob            = 0x10B00,
  ZombieMonster        = 0x30B00,
  Arthropod            = 0x40B00,
  Minecart             = 0x80000,
  SkeletonMonster      = 0x110B00,
  EquineAnimal         = 0x205300,
  Projectile           = 0x400000,
  AbstractArrow        = 0x800000,
  WaterAnimal          = 0x2300,
  VillagerBase         = 0x1000300,
  Chicken              = 0x130A,
  Cow                  = 0x130B,
  Pig                  = 0x130C,
  Sheep                = 0x130D,
  Wolf                 = 0x530E,
  Villager             = 0x100030F,
  MushroomCow          = 0x1310,
  Squid                = 0x2311,
  Rabbit               = 0x1312,
  Bat                  = 0x8113,
  IronGolem            = 0x314,
  SnowGolem            = 0x315,
  Ocelot               = 0x5316,
  Horse                = 0x205317,
  PolarBear            = 0x131C,
  Llama                = 0x131D,
  Parrot               = 0x531E,
  Dolphin              = 0x231F,
  Donkey               = 0x205318,
  Mule                 = 0x205319,
  SkeletonHorse        = 0x215B1A,
  ZombieHorse          = 0x215B1B,
  Zombie               = 0x30B20,
  Creeper              = 0xB21,
  Skeleton             = 0x110B22,
  Spider               = 0x40B23,
  PigZombie            = 0x10B24,
  Slime                = 0xB25,
  EnderMan             = 0xB26,
  Silverfish           = 0x40B27,
  CaveSpider           = 0x40B28,
  Ghast                = 0xB29,
  LavaSlime            = 0xB2A,
  Blaze                = 0xB2B,
  ZombieVillager       = 0x30B2C,
  Witch                = 0xB2D,
  Stray                = 0x110B2E,
  Husk                 = 0x30B2F,
  WitherSkeleton       = 0x110B30,
  Guardian             = 0xB31,
  ElderGuardian        = 0xB32,
  Npc                  = 0x133,
  WitherBoss           = 0x10B34,
  Dragon               = 0xB35,
  Shulker              = 0xB36,
  Endermite            = 0x40B37,
  Agent                = 0x138,
  Vindicator           = 0xB39,
  Phantom              = 0x10B3A,
  IllagerBeast         = 0xB3B,
  ArmorStand           = 0x13D,
  TripodCamera         = 0x13E,
  Player_0             = 0x13F,
  ItemEntity           = 0x40,
  PrimedTnt            = 0x41,
  FallingBlock         = 0x42,
  MovingBlock          = 0x43,
  ExperiencePotion     = 0x400044,
  Experience           = 0x45,
  EyeOfEnder           = 0x46,
  EnderCrystal         = 0x47,
  FireworksRocket      = 0x48,
  Trident              = 0xC00049,
  Turtle               = 0x134A,
  Cat                  = 0x534B,
  ShulkerBullet        = 0x40004C,
  FishingHook          = 0x4D,
  Chalkboard           = 0x4E,
  DragonFireball       = 0x40004F,
  Arrow                = 0xC00050,
  Snowball             = 0x400051,
  ThrownEgg            = 0x400052,
  Painting             = 0x53,
  LargeFireball        = 0x400055,
  ThrownPotion         = 0x400056,
  Enderpearl           = 0x400057,
  LeashKnot            = 0x58,
  WitherSkull          = 0x400059,
  BoatRideable         = 0x5A,
  WitherSkullDangerous = 0x40005B,
  LightningBolt        = 0x5D,
  SmallFireball        = 0x40005E,
  AreaEffectCloud      = 0x5F,
  LingeringPotion      = 0x400065,
  LlamaSpit            = 0x400066,
  EvocationFang        = 0x400067,
  EvocationIllager     = 0xB68,
  Vex                  = 0xB69,
  MinecartRideable     = 0x80054,
  MinecartHopper       = 0x80060,
  MinecartTNT          = 0x80061,
  MinecartChest        = 0x80062,
  MinecartFurnace      = 0x80063,
  MinecartCommandBlock = 0x80064,
  IceBomb              = 0x40006A,
  Balloon              = 0x6B,
  Pufferfish           = 0x236C,
  Salmon               = 0x236D,
  Drowned              = 0x30B6E,
  Tropicalfish         = 0x236F,
  Fish                 = 0x2370,
  Panda                = 0x1371,
  Pillager             = 0xB72,
  VillagerV2           = 0x1000373,
  ZombieVillagerV2     = 0x30B74,
  Shield               = 0x75,
  WanderingTrader      = 0x376,
  Lectern              = 0x77,
  ElderGuardianGhost   = 0xB78,
  Fox                  = 0x1379,
  Bee                  = 0x17A,
};

enum class ActorTypeNamespaceRules { IncludeNamespace, ExcludeNamespace };

MCAPI void forEachEntityType(std::function<bool(ActorType, std::string const &)>);
MCAPI ActorType EntityTypeFromString(std::string const &);
MCAPI std::string EntityTypeToLocString(ActorType, ActorTypeNamespaceRules);
MCAPI std::string EntityTypeToString(ActorType, ActorTypeNamespaceRules);
