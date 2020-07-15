#pragma once


// ���� Ŭ����^^
class CState
{
public:
	int			m_nStateIndex;		// ���� State �ε���
	CState*		m_pCurState;		// ���� State ������(�ڱ��ڽ�)

public:
	CState();
	~CState();

public:
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Exit() = 0;

};