/*
 * Copyright (C) 2018 Miloš Stojanović
 *
 * SPDX-License-Identifier: GPL-2.0-only
 */

#ifndef RAIN_COLUMN_H
#define RAIN_COLUMN_H

#include <list>
#include <memory>
#include "Active.h"
#include "CountdownTimer.h"
#include "RainStreak.h"

class Rain;

class RainColumn : public Active {
	const std::shared_ptr<Rain> rain;
	const int x;
	const int Speed;
	CountdownTimer GapTimer;
	bool EmptyRainStreakSlot {true};
	std::list<RainStreak> RainStreaks;
public:
	RainColumn(const std::shared_ptr<Rain> &R, int X, int S);

	void Update();
};

#endif
