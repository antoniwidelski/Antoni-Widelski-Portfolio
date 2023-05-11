#include "BTTask_Teleport.h"
#include "MageCharacter.h"
#include "AIController.h"

//Custom Task Node used in Behavior Tree by MageCharacter

UBTTask_Teleport::UBTTask_Teleport()
{
    NodeName = "Teleport";
}

EBTNodeResult::Type UBTTask_Teleport::ExecuteTask(UBehaviorTreeComponent &OwnerComp, uint8 *NodeMemory)
{
    //Calling Teleport from MageCharacter
    Super::ExecuteTask(OwnerComp, NodeMemory);

    AAIController* Controller = OwnerComp.GetAIOwner();
    if(Controller == nullptr) return EBTNodeResult::Failed;

    AMageCharacter* Mage = Cast<AMageCharacter>(Controller->GetPawn());

    if(Mage)
    {
        Mage->Teleport();

        return EBTNodeResult::Succeeded;
    }

    return EBTNodeResult::Failed;
}
