/*=============================================================================

		足場描画[ base.h ]

-------------------------------------------------------------------------------
	■　製作者
		大野拓也

	■　作成日
		2016/08/22
-------------------------------------------------------------------------------
	■　Update
		2016/08/22
			・定数定義追加
				#define MAX_BASE	//	足場の最大数
			・構造体追加
			typedef struct
			{
				D3DXVECTOR2 pos;	//	座標
				D3DXVECTOR2 size;	//	大きさ
				bool use;			//	使用中ならtrue
			}BASE;
			・プロトタイプ宣言追加
				HRESULT InitBase( void );	//	足場の初期化
				void UninitBase( void );	//	足場の終了
				void UpdateBase( void );	//	足場の更新
				void DrawBase( void );		//	足場の描画
				BASE *GetBase( int IndexBase );		//	足場情報の取得
-----------------------------------------------------------------------------*/
#ifndef _BASE_H_
#define _BASE_H_
/*-----------------------------------------------------------------------------
	定数定義
-----------------------------------------------------------------------------*/
#define MAX_BASE ( 54 )	//	足場の最大数
#define MAX_GOOL ( MAX_BASE-1 )	//	ゴール

#define MOVE_AFTER ( 6.0f )	//	速さ変更
#define MOVE_REPOSIT ( 3.0f )	//	速さ元に戻す
/*-----------------------------------------------------------------------------
	構造体
-----------------------------------------------------------------------------*/
typedef struct
{
	D3DXVECTOR2 pos;	//	座標
	D3DXVECTOR2 size;	//	大きさ
	float move_X;	//	移動量
	bool GoolFalg;	//	ゴールしたかどうか
	bool use;			//	使用中ならtrue
}BASE;
/*-----------------------------------------------------------------------------
	プロトタイプ宣言
-----------------------------------------------------------------------------*/
HRESULT InitBase( void );	//	足場の初期化
void UninitBase( void );	//	足場の終了
void UpdateBase( void );	//	足場の更新
void DrawBase( void );		//	足場の描画
BASE *GetBase( int IndexBase );		//	足場情報の取得
#endif