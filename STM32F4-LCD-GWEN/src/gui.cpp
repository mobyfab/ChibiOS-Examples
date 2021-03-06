#include "gui.h"

GWEN_CONTROL_CONSTRUCTOR(testControl) // Macro
{

	m_but1 = new Controls::Button( this );
	m_but1->SetBounds( 10, 10, 100, 50 );
	m_but1->SetText( "Decrease" );
	m_but1->onPress.Add( this, &testControl::Button1_pressed );

	m_but2 = new Controls::Button( this );
	m_but2->SetBounds( 120, 10, 100, 50 );
	m_but2->SetText( "Increase" );
	m_but2->onPress.Add( this, &testControl::Button2_pressed );

	m_pgb1 = new Controls::ProgressBar( this );
	m_pgb1->SetBounds(10, 70, 210, 30);
	m_pgb1->SetValue( 0.2f );

	m_slider1 = new Controls::HorizontalSlider( this );
	m_slider1->SetBounds(10, 120, 460, 30);
	m_slider1->SetRange( 0, 100 );
	m_slider1->SetFloatValue( 20 );
	m_slider1->SetNotchCount( 50 );
	m_slider1->SetClampToNotches( true );
	m_slider1->onValueChanged.Add( this, &testControl::Slider1_changed );

	m_combo1 = new Controls::ComboBox( this );
	m_combo1->SetBounds(240, 10, 150, 30);
	m_combo1->AddItem( "Option One", "one" );
	m_combo1->AddItem( "Number Two", "two" );
	m_combo1->AddItem( "Door Three", "three" );
	m_combo1->AddItem( "Four Legs", "four" );
	m_combo1->AddItem( "Five Birds", "five" );
	m_combo1->onSelection.Add( this, &testControl::OnComboSelect );

	m_but3 = new Controls::Button( this );
	m_but3->SetText( "Popup Window" );
	m_but3->onPress.Add( this, &testControl::OpenWindow );
	m_but3->SetPos( 10, 180 );
}
