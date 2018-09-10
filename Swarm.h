#pragma once
#include "Particle.h"

namespace myscreen
{

	class Swarm
	{
	public:
		const static int NPARTICLES = 5000;
	private:
		Particle *m_particles;
		int lastTime;
	public:
		Swarm();
		~Swarm();

		void update(int elapsed);

		const Particle *const getParticles() { return m_particles; }

	};
}