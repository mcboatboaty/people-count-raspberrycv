﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "MainPage.xaml.h"

void ::CameraGetPreviewFrame::MainPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::CameraGetPreviewFrame::MainPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                this->SaveFrameCheckBox = safe_cast<::Windows::UI::Xaml::Controls::CheckBox^>(__target);
            }
            break;
        case 2:
            {
                this->ShowFrameCheckBox = safe_cast<::Windows::UI::Xaml::Controls::CheckBox^>(__target);
            }
            break;
        case 3:
            {
                this->GreenEffectCheckBox = safe_cast<::Windows::UI::Xaml::Controls::CheckBox^>(__target);
            }
            break;
        case 4:
            {
                this->GetPreviewFrameButton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->GetPreviewFrameButton))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::CameraGetPreviewFrame::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::GetPreviewFrameButton_Click);
            }
            break;
        case 5:
            {
                this->FrameInfoTextBlock = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 6:
            {
                this->PreviewControl = safe_cast<::Windows::UI::Xaml::Controls::CaptureElement^>(__target);
            }
            break;
        case 7:
            {
                this->PreviewFrameImage = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::CameraGetPreviewFrame::MainPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}

