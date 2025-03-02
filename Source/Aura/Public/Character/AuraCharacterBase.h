// Copyright Quentin Hardwick

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

// We want to inherit from here rather than instantiate, so declaring as Abstract prevents us from accidentally dragging it into the level editor:
UCLASS(Abstract)
class AURA_API AAuraCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAuraCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
