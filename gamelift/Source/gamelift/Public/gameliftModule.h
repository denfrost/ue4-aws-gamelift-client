#pragma once

#include "ModuleManager.h"

#include "aws/gamelift/GameliftClient.h"
#include "aws/gamelift/model/SearchGameSessionsRequest.h"
#include "aws/gamelift/model/CreatePlayerSessionRequest.h"


class GameliftModuleImpl : public IModuleInterface
{
public:
	void StartupModule();
	void ShutdownModule();

private:
};