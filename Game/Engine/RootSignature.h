#pragma once

// [��༭ / ����]

//		CPU [        ]    GPU [        ]
//		�ѱ� [        ]   ��Ʈ�� [       ]

// GPT ��,
// �ؽ�ó, ����, ���÷��� ���� ���ҽ��� �׷��� ���������ο� ��� ���ε��Ǵ����� �����ϴ� ������ ����
// ���̴��� ������ �� �ִ� ���ҽ��� ���� ����� ����
// ���ҽ��� ���� ȿ�������� �����ϰ� ���� �����ϰ� ����ȭ�� �׷��� ������������ ���� �� �ֵ��� ��.

class RootSignature
{
public:
	void Init(ComPtr<ID3D12Device> device);

	ComPtr<ID3D12RootSignature>	GetSignature() { return _signature; }
private:
	ComPtr<ID3D12RootSignature> _signature;
};

