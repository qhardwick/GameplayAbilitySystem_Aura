// Copyright Quentin Hardwick

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EnemyInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEnemyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AURA_API IEnemyInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	// = 0 denotes a "pure virtual function" that MUST be defined in implementing class. Used to highlight enemies on mouse hover:
	virtual void HighlightActor() = 0;
	virtual void UnHighlightActor() = 0;
};
