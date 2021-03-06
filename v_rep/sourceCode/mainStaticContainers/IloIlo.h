// This file is part of V-REP, the Virtual Robot Experimentation Platform.
// 
// Copyright 2006-2014 Coppelia Robotics GmbH. All rights reserved. 
// marc@coppeliarobotics.com
// www.coppeliarobotics.com
// 
// V-REP is dual-licensed, under the terms of EITHER (at your option):
//   1. V-REP commercial license (contact us for details)
//   2. GNU GPL (see below)
// 
// GNU GPL license:
// -------------------------------------------------------------------
// V-REP is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// V-REP IS DISTRIBUTED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
// WARRANTY. THE USER WILL USE IT AT HIS/HER OWN RISK. THE ORIGINAL
// AUTHORS AND COPPELIA ROBOTICS GMBH WILL NOT BE LIABLE FOR DATA LOSS,
// DAMAGES, LOSS OF PROFITS OR ANY OTHER KIND OF LOSS WHILE USING OR
// MISUSING THIS SOFTWARE.
// 
// See the GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with V-REP.  If not, see <http://www.gnu.org/licenses/>.
// -------------------------------------------------------------------
//
// This file was automatically created for V-REP release V3.1.2 on June 16th 2014

// This file requires serious refactoring!!!
#pragma once

#include "LuaCustomFunctionContainer.h"
#include "dynInterface.h"
#include "v_repTypes.h"
#include <QComboBox>


// FULLY STATIC CLASS
class CIloIlo  
{
public:


	static void selectItemOfCombobox(QComboBox* theBox,int itemData);
	static int _getIndexOfComboboxItemWithData(QComboBox* theBox,int itemData);


	static bool outputSimDllErrors;
	static void quicklyDisableAndAutomaticallyReenableCNameSuffixAdjustment();
	static void enableCNameSuffixAdjustment();
	static std::string getCNameSuffixAdjustedName(const char* name);
	static void setCNameSuffixNumber(int number);
	static int getCNameSuffixNumber();

	static void setModelAcknowledgementOLD_20100714(const std::string& ack);
	static std::string getModelAcknowledgementOLD_20100714();

	static volatile int apiLocked;
	static DWORD idOfLockingThread;

	static CLuaCustomFunctionContainer luaCustomFunctionContainer;
	static std::vector<contactCallback> allContactCallbacks;
	static std::vector<jointCtrlCallback> allJointCtrlCallbacks;

	static int proxSensorClickSelectDown;
	static int proxSensorClickSelectUp;

	static bool frustumCulling;
	static bool debugSensorCutting;
	static bool collisionCachingOff;
	static bool distanceCachingOff;
	static bool simulationShowEnabled;
	static int simulationShowTimeIntervalInMiliSec;

	static int maximumOpenGlLights;

	static int flyModeCameraHandle;
	static int flyModeCameraHandleInstance;

	static int nextfreeServerPortToUse;
	static bool outputSceneOrModelLoadMessagesWithApiCall;
	static bool fullModelCopyFromApi;

	static bool wirelessForceShow_emission;
	static bool wirelessForceShow_reception;

private:
	static std::string _modelAcknowledgementOLD_20100714;
	static bool cNameSuffixAdjustmentTemporarilyDisabled;
	static int cNameSuffixNumber;
};
