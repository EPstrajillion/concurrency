/**
 * @file RaytracerMultithreaded.cpp
 * @author Ellen Price <<eprice@caltech.edu>>
 * @version 1.0
 * @date 2013-2014
 * @copyright see License section
 *
 * @brief Functions for multithreaded raytracer.
 *
 * @section License
 * Copyright (c) 2013-2014 California Institute of Technology.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above
 *   copyright notice, this list of conditions and the following disclaimer
 *   in the documentation and/or other materials provided with the
 *   distribution.
 * * Neither the name of the  nor the names of its
 *   contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those
 * of the authors and should not be interpreted as representing official policies,
 * either expressed or implied, of the California Institute of Technology.
 *
 */

#include "RaytracerMultithreaded.h"


/**
 * @brief Initializes the raytracer.
 *
 * @param[in] w World to which this raytracer is to be applied.
 *
 * @param[in] s Shader this raytracer is meant to use.
 */
RaytracerMultithreaded::RaytracerMultithreaded(World *w, Shader *s) : RaytracerBase(w, s)
{
    /* TODO: Do any other initialization here. */
}


/**
 * @brief Deinitializes thr raytracer.
 */
RaytracerMultithreaded::~RaytracerMultithreaded()
{
    /* TODO: Do any deinitialization here. */
}


/**
 * @brief Runs the raytracer.
 *
 * @attention This is a student-implemented function. The student
 * should base this function on `RaytracerSinglethreaded::run` and
 * `RaytracerSinglethreaded::trace` in `RaytracerSinglethreaded.cpp`,
 * but it must perform the raytracing task in at least two threads.
 */
void RaytracerMultithreaded::run()
{
    /* TODO: Write this function. */
}

