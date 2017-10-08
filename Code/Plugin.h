// Copyright (c) 2017, uniflare, see LICENSE.txt for details

#pragma once
#include "CVars.h"
#include "SplashExample.h"

#include <CrySystem/ICryPlugin.h>
#include <CryEntitySystem/IEntityClass.h>

class CSplashExample;
class CPlugin_SplashExample
	: ICryPlugin
{
	// Console variables provided by this object
	CVars m_sCVars;

	// reference to splash example implementation
	CSplashExample * m_pSplashExample;
public:
	CRYINTERFACE_SIMPLE(ICryPlugin)
		CRYGENERATE_SINGLETONCLASS(CPlugin_SplashExample, "Plugin_SplashExample", 0x53706C6173682045, 0x78616D706C650000)

	// ICryPlugin
	virtual const char* GetName() const override { return "Splash Example Plugin"; }
	virtual const char* GetCategory() const override { return "Game"; }
	virtual bool Initialize(SSystemGlobalEnvironment& env, const SSystemInitParams& initParams) override;
	virtual void OnPluginUpdate(EPluginUpdateType updateType) override {}
	// ~ICryPlugin

	CPlugin_SplashExample();
	virtual ~CPlugin_SplashExample();
};