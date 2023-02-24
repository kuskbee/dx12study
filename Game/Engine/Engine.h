#pragma once
class Engine
{
public:

	void Init(const WindowInfo& info);
	void Render();

public:
	void RenderBegin(); //cmdQueue에 일감 넣기
	void RenderEnd(); // 맡긴 일감을 그리도록 시행

	void ResizeWindow(int32 width, int32 height);

private:

	// 그려질 화면 크기 관련
	WindowInfo _window;
	D3D12_VIEWPORT _viewport = {};
	D3D12_RECT _scissorRect = {};

	shared_ptr<class Device> _device;
	shared_ptr<class CommandQueue> _cmdQueue;
	shared_ptr<class SwapChain> _swapChain;
	shared_ptr<class DescriptorHeap> _descHeap;

};

