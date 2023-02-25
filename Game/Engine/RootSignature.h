#pragma once

// [계약서 / 결재]

//		CPU [        ]    GPU [        ]
//		한국 [        ]   베트남 [       ]

// GPT 왈,
// 텍스처, 버퍼, 샘플러와 같은 리소스가 그래픽 파이프라인에 어떻게 바인딩되는지를 설명하는 데이터 구조
// 셰이더가 접근할 수 있는 리소스와 접근 방법을 정의
// 리소스를 보다 효율적으로 관리하고 보다 유연하고 최적화된 그래픽 파이프라인을 만들 수 있도록 함.

class RootSignature
{
public:
	void Init(ComPtr<ID3D12Device> device);

	ComPtr<ID3D12RootSignature>	GetSignature() { return _signature; }
private:
	ComPtr<ID3D12RootSignature> _signature;
};

