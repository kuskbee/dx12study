#pragma once
class Engine
{
public:

	void Init(const WindowInfo& info);
	void Render();

	void ResizeWindow(int32 width, int32 height);

private:

	// �׷��� ȭ�� ũ�� ����
	WindowInfo _window;
	D3D12_VIEWPORT _viewport = {};
	D3D12_RECT _scissorRect = {};

};

