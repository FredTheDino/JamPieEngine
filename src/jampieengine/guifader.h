#pragma once
#include "guielement.h"

#include "material.h"

namespace Jam {

	class GUIFader : public GUIElement{
	public:
		GUIFader(RenderEngine* engine, int layer, float anchorX, float anchorY, 
				 std::string on, std::string off, std::string value);
		~GUIFader();

		float getValue();
		void setValue(float value);

		virtual void draw();

	private:
		float _value;
		
		Material _materialOff;
		Material _materialValue;
	};
}