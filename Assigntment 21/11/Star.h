#pragma once

#include "GameObject.h"

constexpr int ID_SPRITE_STAR = 40000;
constexpr int STAR_SIZE = 15;

class CStar : public CGameObject
{
public:
	CStar(float x, float y) : CGameObject(x, y) {}

	void Render() override
	{
		CSprites::GetInstance()->Get(ID_SPRITE_STAR)->Draw(x, y);
	}

	void GetBoundingBox(float& left, float& top, float& right, float& bottom) override
	{
		left = x - STAR_SIZE / 2.0f;
		top = y - STAR_SIZE / 2.0f;
		right = left + STAR_SIZE;
		bottom = top + STAR_SIZE;
	}

	int IsBlocking() override { return 0; }
};
