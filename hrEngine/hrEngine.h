#pragma once


namespace nshrEngine {
    class hrEngine {
    private:
        hrEngine() {}
        ~hrEngine() {}


    public:
        /**
         * 初期化データ
         */
        struct InitData {
            HWND hwnd;					// ウィンドウハンドル。
            UINT frameBufferWidth;		// フレームバッファの幅。
            UINT frameBufferHeight;		// フレームバッファの高さ。
        };


        /**
         * インスタンスの生成
         */
        static void CreateInstance(const InitData& initData)
        {
            m_instance = new hrEngine;
            m_instance->Init(initData);
        }



        /**
         * インスタンスの破棄
         */
        static void DeleteInstance()
        {
            delete m_instance;
        }


        /**
         * インスタンスの取得
         */
        static hrEngine* GetInstance()
        {
            return m_instance;
        }


        /**
         * エンジンの初期化
         */
        void Init(const InitData& initData);


        /**
         * エンジンの更新
         */
        void Execute();

    private:
        K2EngineLow m_k2EngineLow;	
        static hrEngine* m_instance;
    };

    /** グローバルなアクセスポイント */
    extern hrEngine* g_hrEngine;
}
