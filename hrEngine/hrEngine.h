#pragma once


//namespace nshrEngine {
//#ifdef K2_DEBUG
//	namespace nsDbg {
//		class VectorRenderer;
//	}
//#endif // #ifdef K2_DEBUG
	/// <summary>
	/// K2Engine
	/// </summary>
	/// <remark>
	/// 河原学園内製のゲームエンジン。
	/// k2EngineLowをベースに拡張されたエンジンです。
	/// 主に、レンダリングエンジンの機能を提供しています。
	/// 
	/// このクラスはシングルトンパターンで設計されています。
	/// シングルトンパターンは下記の二つの機能を提供するパターンです。
	/// 1.　グローバルなアクセスポイント
	///		->グローバル変数の機能
	/// 2　インスタンスの数を一つに制限する機能。
	/// インスタンスの生成はCreateInstance()、
	/// インスタンスの破棄はDeleteInstance()、
	/// インスタンスの取得はCreateInstance()を呼び出してください。
	/// </reramk>
class hrEngine {
public:
    /// <summary>
    /// コンストラクタ。
    /// </summary>

    hrEngine();
    /// <summary>
    /// デストラクタ。
    /// </summary>
    ~hrEngine();

    //	public:
    //		/// <summary>
    //		/// 初期化データ。
    //		/// </summary>
    //		struct initdata {
    //			hwnd hwnd;					// ウィンドウハンドル。
    //			uint framebufferwidth;		// フレームバッファの幅。
    //			uint framebufferheight;		// フレームバッファの高さ。
    //			bool issoftshadow;			// ソフトシャドウを行う？
    //		};
    //		/// <summary>
    //		/// インスタンスの作成。
    //		/// </summary>
    //		static void createinstance(const initdata& initdata)
    //		{
    //			m_instance = new hrengine;
    //			m_instance->init(initdata);
    //		}
    //		/// <summary>
    //		/// インスタンスの破棄。
    //		/// </summary>
    //		static void deleteinstance()
    //		{
    //			delete m_instance;
    //		}
    //		/// <summary>
    //		/// インスタンスを取得。
    //		/// </summary>
    //		/// <returns></returns>
    //		static hrengine* getinstance()
    //		{
    //			return m_instance;
    //		}
    //		/// <summary>
    //		/// k2engineを初期化
    //		/// </summary>
    //		void init(const initdata& initdata);
    //		/// <summary>
    //		/// エンジンの処理を実行。
    //		/// </summary>
    //		void execute();
    //#ifdef k2_debug
    //		/// <summary>
    //		/// ベクトルのデバッグ出力
    //		/// </summary>
    //		/// <param name="vector">ベクトル</param>
    //		/// <param name="origin">起点</param>
    //		/// <param name="name">名前</param>
    //		void drawvector(const vector3& vector, const vector3& origin, const char* name = "no name");
    //		/// <summary>
    //		/// ベクトルのデバッグ描画を有効にする。
    //		/// </summary>
    //		void setdrawvectorenable();
    //		/// <summary>
    //		/// ベクトルのデバッグ描画を無効にする。
    //		/// </summary>
    //		void setdrawvectordisable();
    //#else
    //		void drawvector(const vector3& vector, const vector3& origin, const char* name = "no name")
    //		{
    //
    //		}
    //		void setdrawvectorenable()
    //		{
    //
    //		}
    //		void setdrawvectordisable()
    //		{
    //
    //		}
    //#endif // #ifdef k2_debug
    //	private:
    //
    //		k2enginelow m_k2enginelow;							// 
    //		collisionobjectmanager m_collisionobjectmanager;	// 
    //		renderingengine m_renderingengine;					// レンダリングエンジン。
    //#ifdef k2_debug
    //		nsdbg::vectorrenderer* m_vectorrenderer = nullptr;	// デバッグベクトル描画処理
    //#endif // k2_debug
    //		static k2engine* m_instance;
    //	};
    //
    //	// グローバルなアクセスポイント。
    //	extern hrengine* g_k2engine;
    //	extern renderingengine* g_renderingengine;
    //	extern scenelight* g_scenelight;
    //	extern collisionobjectmanager* g_collisionobjectmanager;

};
