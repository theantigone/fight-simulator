#pragma once //to prevent multiple inclusions of this header file

typedef enum ChampionDamageType{
    AP,
    AD,
}dmg_type_t;

typedef struct Champion{
    char name[100];
    int hp,dmg;
    char dmg_type[2];
}champ_t;
