/**
 * hrEngine.cpp : スタティック ライブラリ用の関数を定義
 */


#include "hrEnginePreCompile.h"
#include "hrEngine.h"


namespace nshrEngine {
    hrEngine* hrEngine::m_instance = nullptr;
    hrEngine* g_hrEngine = nullptr;


    hrEngine::~hrEngine()
    {
        g_engine = nullptr;
    }


    void hrEngine::Init(const InitData& initData)
    {
        g_hrEngine = this;
        g_engine = &m_k2EngineLow;

        raytracing::InitData raytracintInitData;

        m_k2EngineLow.Init(
            initData.hwnd,
            initData.frameBufferWidth,
            initData.frameBufferHeight,
            raytracintInitData
        );
    }


    void hrEngine::Execute()
    {
    }
}
