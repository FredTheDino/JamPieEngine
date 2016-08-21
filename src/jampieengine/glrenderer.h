#pragma once

#include "gllibrary.h"
#include "glshaderprogram.h"
#include "glmesh.h"

namespace Jam
{
	class Renderer;

	class GLRenderer
	{
	public:
		GLRenderer(Renderer& renderer, std::string mesh, std::string shaderProgram);

		void draw();

	private:

		Renderer& _renderer;

		GLMesh* _mesh;

		GLShaderProgram* _shaderProgram;

		void _setMesh(GLMesh* mesh);

		void _setShaderProgram(GLShaderProgram* shaderProgram);


		friend Renderer;
	};
}