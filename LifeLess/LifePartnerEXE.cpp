#include<bits/stdc++.h>
using namespace std;

bool LifePartnerEligibility (string is_She_From){
    if(is_She_From == "Barishal") return false;
    else return true;
}

bool TeammatesEligibility(
    bool isDedicated,
    bool isSerious,
    bool isExperienced,
    bool isGoodAtCommunication,
    bool isTeamPlayer,
    bool isAvailableOnTime,
    bool isSkilledInDomain,
    bool isCreative,
    bool isResponsible,
    bool isProblemSolver,
    string is_She_From
) {
   return isDedicated and
          isSerious and 
          isExperienced and 
          isGoodAtCommunication and
          isTeamPlayer and
          isAvailableOnTime and
          isSkilledInDomain and
          isCreative and
          isResponsible and
          isProblemSolver and
          is_She_From != "Barishal"; 
}