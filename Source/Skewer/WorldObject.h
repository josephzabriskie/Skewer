#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WorldObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class SKEWER_API UWorldObject : public UObject
{
	GENERATED_BODY()

public:
	UWorld* GetWorld() const;
	
};
