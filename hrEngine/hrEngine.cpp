/**
 * hrEngine.cpp : スタティック ライブラリ用の関数を定義
 */


#include "hrEnginePreCompile.h"
#include "hrEngine.h"


namespace nshrEngine {
    hrEngine* hrEngine::m_instance = nullptr;
    hrEngine* g_hrEngine = nullptr;


    void hrEngine::Init(const InitData& initData)
    {
    }


    void hrEngine::Execute()
    {
    }
}
