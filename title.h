/*=============================================================================

		�^�C�g��[ Title.h ]

-------------------------------------------------------------------------------
	���@�����
		�����

	���@�쐬��
		2016/08/02
-------------------------------------------------------------------------------
	���@Update
		2016/08/02
			�E�v���g�^�C�v�錾�̒ǉ�
				void InitTitle( void );	//	�^�C�g���̏�����
				void UninitTitle( void );	//	�^�C�g���̏I��
				void UpdateTitle( void );	//	�^�C�g���̍X�V
				void DrawTitle( void );	//	�^�C�g���̕`��
*/
#ifndef _TITLE_H_
#define _TITLE_H_

#define DELAY_PAD ( 10 )	//	�p�b�h�̃f�B���C
/*-----------------------------------------------------------------------------
	�\����
-----------------------------------------------------------------------------*/
typedef struct
{
	D3DXVECTOR2 Pos;	//	���W
	D3DXVECTOR2 Size;	//	�傫��
	D3DXVECTOR2 move;	//	�ړ���
}TITLE;
/*-----------------------------------------------------------------------------
	�v���g�^�C�v�錾
-----------------------------------------------------------------------------*/
void InitTitle( void );	//	�^�C�g���̏�����
void UninitTitle( void );	//	�^�C�g���̏I��
void UpdateTitle( void );	//	�^�C�g���̍X�V
void DrawTitle( void );	//	�^�C�g���̕`��
#endif