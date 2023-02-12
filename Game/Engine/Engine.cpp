#include "pch.h"
#include "Engine.h"

void Engine::Init(const WindowInfo& info)
{
	_window = info;
	ResizeWindow(_window.width, _window.height);

	// �׷��� ȭ�� ũ�⸦ ����
	_viewport = { 0, 0, static_cast<FLOAT>(info.width), static_cast<FLOAT>(info.height), 0.0f, 1.0f };
	_scissorRect = CD3DX12_RECT(0, 0, info.width, info.height);


}

void Engine::Render()
{
}

// �ǽð����� ������ ũ�⸦ ������ �� �ֵ��� ũ�� ���ڸ� ����.
void Engine::ResizeWindow(int32 width, int32 height)
{
	// ������ ũ�� â ����
	_window.width = width;
	_window.height = height;

	RECT rect = { 0, 0, width, height };
	::AdjustWindowRect(&rect, WS_OVERLAPPEDWINDOW, false);
	::SetWindowPos(_window.hwnd, 0, 100, 100, width, height, 0);
}
