//=============================================================================
//
// �T�E���h���� [sound.h]
// Author : AKIRA TANAKA
//
//=============================================================================
#ifndef _SOUND_H_
#define _SOUND_H_

#include "main.h"

//*****************************************************************************
// �T�E���h�t�@�C��
//*****************************************************************************
typedef enum
{
	SOUND_LABEL_BGM_TITLE = 0,		//	�^�C�g��BGM
	SOUND_LABEL_BGM_GAME,			//	�Q�[��BGM
	SOUND_LABEL_BGM_RESULT,			//	���U���gBGM
	SOUND_LABEL_SE_ENTER,			// ���艹
	SOUND_LABEL_SE_SERECT,			//	�I����
	SOUND_LABEL_SE_HIT,				//	���j��
	SOUND_LABEL_SE_GOOL,			//	�S�[����
	//SOUND_LABEL_SE_ATTACK,//	�U����
	
	SOUND_LABEL_MAX,
} SOUND_LABEL;

//*****************************************************************************
// �v���g�^�C�v�錾
//*****************************************************************************
HRESULT InitSound(HWND hWnd);	//	���y�̏�����
void UninitSound(void);	//	���y�̏I��
HRESULT PlaySound(SOUND_LABEL label);	//	���y�Đ�
void StopSound(SOUND_LABEL label);	//	���Ԗڂ̉����~�߂�
void StopSound(void);

#endif