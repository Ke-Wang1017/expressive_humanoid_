# Copyright (c) 2018-2023, NVIDIA Corporation
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice, this
#    list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation
#    and/or other materials provided with the distribution.
#
# 3. Neither the name of the copyright holder nor the names of its
#    contributors may be used to endorse or promote products derived from
#    this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
# FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
# SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
# CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
# OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

import os
from pathlib import Path

from poselib.skeleton.skeleton3d import SkeletonTree, SkeletonState
from poselib.visualization.common import plot_skeleton_state
from poselib.core.rotation3d import *

import torch
import numpy as np

###################### Legs ###############################
# load in XML mjcf file and save zero rotation pose in npy format
# xml_path = "../data/assets/mjcf/stompy/legs.xml"
# skeleton = SkeletonTree.from_mjcf(xml_path)
# print(skeleton)

# zero_pose = SkeletonState.zero_pose(skeleton)
# # zero_pose.to_file("data/nv_humanoid.npy")
# plot_skeleton_state(zero_pose)

# local_rotation = torch.tensor(([[ 0.00000000e+00,  0.00000000e+00,  0.00000000e+00,
#          1.00000000e+00],
#        [-7.07106781e-01,  2.58818920e-08,  7.07106781e-01,
#          2.58818920e-08],
#        [ 5.00000000e-01, -5.00000000e-01, -5.00000000e-01,
#          5.00000000e-01],
#        [ 6.83012647e-01, -1.83012906e-01, -1.83012906e-01,
#          6.83012647e-01],
#        [-1.64084949e-08,  7.07106781e-01,  1.64084949e-08,
#          7.07106781e-01],
#        [-1.04527994e-01,  9.94521945e-01, -3.67175980e-08,
#          2.60500986e-08],
#        [-5.00000000e-01, -5.00000000e-01,  5.00000000e-01,
#          5.00000000e-01],
#        [ 2.58818920e-08,  7.07106781e-01, -2.58818920e-08,
#          7.07106781e-01],
#        [ 7.07106781e-01,  0.00000000e+00,  0.00000000e+00,
#          7.07106781e-01],
#        [ 6.83012647e-01, -1.83012906e-01, -1.83012906e-01,
#          6.83012647e-01],
#        [-5.00000000e-01,  5.00000000e-01,  5.00000000e-01,
#          5.00000000e-01],
#        [-1.04527994e-01,  9.94521945e-01, -3.67175980e-08,
#          2.60500986e-08],
#        [ 5.00000000e-01,  5.00000000e-01,  5.00000000e-01,
#          5.00000000e-01]]))
# global_rotation = torch.tensor(
#     [[ 0.00000000e+00,  0.00000000e+00,  0.00000000e+00,
#          1.00000000e+00],
#        [-7.07106781e-01,  2.58818920e-08,  7.07106781e-01,
#          2.58818920e-08],
#        [ 0.00000000e+00,  0.00000000e+00,  7.07106755e-01,
#          7.07106807e-01],
#        [ 6.12372554e-01,  3.53553186e-01,  3.53553186e-01,
#          6.12372554e-01],
#        [ 1.83012926e-01,  6.83012625e-01,  6.83012656e-01,
#          1.83012935e-01],
#        [-6.98401071e-01,  1.10616461e-01,  2.53404322e-01,
#         -6.60141040e-01],
#        [ 1.62880376e-01,  6.07877125e-01,  2.01140407e-01,
#         -7.50664986e-01],
#        [ 2.58818920e-08,  7.07106781e-01, -2.58818920e-08,
#          7.07106781e-01],
#        [ 5.00000018e-01,  4.99999982e-01, -5.00000018e-01,
#          4.99999982e-01],
#        [ 4.99999742e-01, -1.83012519e-08, -8.66025553e-01,
#         -3.16987199e-08],
#        [ 6.83012654e-01,  1.83012881e-01, -1.83012931e-01,
#          6.83012641e-01],
#        [ 1.10616445e-01,  6.98401064e-01,  6.98401012e-01,
#         -1.10616372e-01],
#        [ 6.24332407e-08,  5.87784630e-01,  1.08387440e-08,
#         -8.09017447e-01]]
# )
# #####################################
# new_pose = SkeletonState.from_rotation_and_root_translation(
#             skeleton_tree=skeleton,
#              r=global_rotation,
#              t=zero_pose.root_translation,
#              is_local=False
#           )
# #####################################
# plot_skeleton_state(new_pose)
# global_rotation_2 = torch.tensor(
# [[ 0.        ,  0.        ,  0.        ,  1.        ],
#        [-0.52350912, -0.47532958,  0.52350908,  0.47532961],
#        [ 0.64976267, -0.17229314,  0.18975675,  0.71562276],
#        [ 0.99868973,  0.01705376, -0.00342676,  0.04812752],
#        [-0.35962366, -0.61230209, -0.37686272, -0.59475328],
#        [ 0.52105355, -0.47356121, -0.50908369,  0.49505229],
#        [-0.08522905,  0.67964234,  0.72552541,  0.06659719],
#        [ 0.06706895, -0.70391886,  0.067069  , -0.70391885],
#        [-0.6149014 ,  0.16575294, -0.20066498, -0.74441642],
#        [ 0.692529  , -0.71512577,  0.06918633,  0.06489963],
#        [-0.60624821,  0.37012858,  0.61194128, -0.34784453],
#        [-0.51642108, -0.47830666, -0.50579314, -0.49870363],
#        [-0.04592207,  0.68936361,  0.71953576,  0.0702657 ]]
# )

# new_pose_2 = SkeletonState.from_rotation_and_root_translation(
#             skeleton_tree=skeleton,
#              r=global_rotation_2,
#              t=zero_pose.root_translation,
#              is_local=False
#           )
# plot_skeleton_state(new_pose_2)
################################## Full Stompy mocap T-pose ############################
xml_path = "../data/assets/mjcf/stompy/stompy_mocap.xml"
skeleton = SkeletonTree.from_mjcf(xml_path)
print(skeleton)

zero_pose = SkeletonState.zero_pose(skeleton)
# zero_pose.to_file("data/nv_humanoid.npy")
local_rotation = zero_pose.local_rotation.clone()
print("local rotation shape: ", local_rotation.shape)
# local_rotation = torch.tensor(
#     [[ 0.00000000e+00,  0.00000000e+00,  0.00000000e+00,
#          1.00000000e+00],
#        [-4.22592942e-01,  4.22592942e-01, -5.66934922e-01,
#          5.66934922e-01],
#        [-1.83012906e-01, -6.83012647e-01, -1.83012906e-01,
#          6.83012647e-01],
#        [ 1.64084949e-08, -7.07106781e-01,  1.64084949e-08,
#          7.07106781e-01],
#        [-1.89468941e-08, -7.07106781e-01,  7.07106781e-01,
#          1.89468941e-08],
#        [ 1.09091966e-01,  6.98640782e-01,  6.98640782e-01,
#          1.09091966e-01],
#        [ 5.00000000e-01,  5.00000000e-01,  5.00000000e-01,
#          5.00000000e-01],
#        [-7.07106781e-01,  9.47342707e-09,  7.07106781e-01,
#          9.47342707e-09],
#        [-4.92254848e-08, -7.07106781e-01,  7.07106781e-01,
#          4.92254848e-08],
#        [ 4.92254848e-08,  7.07106781e-01,  7.07106781e-01,
#          4.92254848e-08],
#        [-4.22592942e-01, -4.22592942e-01,  5.66934922e-01,
#          5.66934922e-01],
#        [-1.83012906e-01, -6.83012647e-01, -1.83012906e-01,
#          6.83012647e-01],
#        [ 1.64084949e-08, -7.07106781e-01,  1.64084949e-08,
#          7.07106781e-01],
#        [-1.89468941e-08, -7.07106781e-01,  7.07106781e-01,
#          1.89468941e-08],
#        [ 1.09091966e-01,  6.98640782e-01,  6.98640782e-01,
#          1.09091966e-01],
#        [ 5.00000000e-01,  5.00000000e-01,  5.00000000e-01,
#          5.00000000e-01],
#        [-7.07106781e-01,  9.47342707e-09,  7.07106781e-01,
#          9.47342707e-09],
#        [-4.92254848e-08, -7.07106781e-01,  7.07106781e-01,
#          4.92254848e-08],
#        [ 4.92254848e-08,  7.07106781e-01,  7.07106781e-01,
#          4.92254848e-08],
#        [-7.07106781e-01,  7.07106781e-01, -1.64084949e-08,
#          1.64084949e-08],
#        [ 3.53553286e-01, -6.12372496e-01,  3.53553286e-01,
#          6.12372496e-01],
#        [ 5.00000000e-01, -5.00000000e-01, -5.00000000e-01,
#          5.00000000e-01],
#        [ 6.83012647e-01, -1.83012906e-01, -1.83012906e-01,
#          6.83012647e-01],
#        [-5.00000000e-01,  5.00000000e-01,  5.00000000e-01,
#          5.00000000e-01],
#        [-1.04527994e-01,  9.94521945e-01, -3.67175980e-08,
#          2.60500986e-08],
#        [-5.00000000e-01, -5.00000000e-01,  5.00000000e-01,
#          5.00000000e-01],
#        [-6.12372496e-01, -3.53553286e-01, -6.12372496e-01,
#          3.53553286e-01],
#        [ 5.00000000e-01, -5.00000000e-01, -5.00000000e-01,
#          5.00000000e-01],
#        [ 6.83012647e-01, -1.83012906e-01, -1.83012906e-01,
#          6.83012647e-01],
#        [-5.00000000e-01,  5.00000000e-01,  5.00000000e-01,
#          5.00000000e-01],
#        [-1.04527994e-01,  9.94521945e-01, -3.67175980e-08,
#          2.60500986e-08],
#        [ 5.00000000e-01,  5.00000000e-01,  5.00000000e-01,
#          5.00000000e-01]]
# )
# new_pose = SkeletonState.from_rotation_and_root_translation(
#             skeleton_tree=skeleton,
#              r=local_rotation,
#              t=zero_pose.root_translation,
#              is_local=True
#           )
# # plot_skeleton_state(new_pose)
# global_rotation_1 = torch.tensor(
#     [[ 0.00000000e+00,  0.00000000e+00,  0.00000000e+00,
#          1.00000000e+00],
#        [-4.22592942e-01,  4.22592942e-01, -5.66934922e-01,
#          5.66934922e-01],
#        [-8.56956415e-01, -7.21709528e-02, -1.25003843e-01,
#          4.94763676e-01],
#        [-6.94350751e-01, -4.00883309e-01,  5.17568636e-01,
#          2.98818197e-01],
#        [ 8.25089677e-02,  2.79683734e-01,  7.02276500e-01,
#         -6.49443606e-01],
#        [-3.57088555e-01, -4.04247947e-01, -3.49982184e-01,
#         -7.65887611e-01],
#        [-5.88620964e-01, -5.81514593e-01, -5.34355202e-01,
#          1.72715537e-01],
#        [-5.33321240e-01,  7.94064058e-01, -2.89064595e-01,
#         -3.83716817e-02],
#        [ 3.57088520e-01,  4.04247995e-01,  3.49982214e-01,
#          7.65887588e-01],
#        [ 7.65887588e-01,  3.49982214e-01, -4.04247995e-01,
#         -3.57088520e-01],
#        [-4.22592942e-01, -4.22592942e-01,  5.66934922e-01,
#          5.66934922e-01],
#        [ 7.21709528e-02, -8.56956415e-01,  4.94763676e-01,
#          1.25003843e-01],
#        [ 4.00883309e-01, -6.94350751e-01,  2.98818197e-01,
#         -5.17568636e-01],
#        [-2.79683734e-01,  8.25089677e-02, -6.49443606e-01,
#         -7.02276500e-01],
#        [ 4.04247947e-01, -3.57088555e-01, -7.65887611e-01,
#          3.49982184e-01],
#        [ 5.81514593e-01, -5.88620964e-01,  1.72715537e-01,
#          5.34355202e-01],
#        [-7.94064058e-01, -5.33321240e-01, -3.83716817e-02,
#          2.89064595e-01],
#        [-4.04247995e-01,  3.57088520e-01,  7.65887588e-01,
#         -3.49982214e-01],
#        [-3.49982214e-01,  7.65887588e-01, -3.57088520e-01,
#          4.04247995e-01],
#        [-7.07106781e-01,  7.07106781e-01, -1.64084949e-08,
#          1.64084949e-08],
#        [-1.83012822e-01,  6.83012655e-01,  1.83012814e-01,
#          6.83012687e-01],
#        [ 1.16025547e-08, -2.00962221e-08, -4.99999853e-01,
#          8.66025489e-01],
#        [ 4.99999948e-01, -5.00000076e-01, -5.00000052e-01,
#          4.99999924e-01],
#        [ 2.99760217e-15, -2.32051162e-08, -1.27813831e-07,
#          1.00000000e+00],
#        [-1.04527867e-01,  9.94521958e-01, -3.91431826e-08,
#          4.91280914e-08],
#        [ 4.44997001e-01,  5.49524908e-01,  5.49524918e-01,
#          4.44997090e-01],
#        [-6.83012687e-01, -1.83012814e-01,  6.83012655e-01,
#         -1.83012822e-01],
#        [-2.00962221e-08, -1.16025546e-08,  8.66025489e-01,
#          4.99999853e-01],
#        [ 5.00000052e-01,  4.99999924e-01,  4.99999948e-01,
#          5.00000076e-01],
#        [-2.32051163e-08, -2.88657986e-15,  1.00000000e+00,
#          1.27813831e-07],
#        [-9.94521958e-01, -1.04527867e-01,  2.97209619e-09,
#          3.42920199e-08],
#        [-5.49524897e-01,  4.44997064e-01, -4.44997027e-01,
#          5.49524928e-01]]
# )
# new_pose_2 = SkeletonState.from_rotation_and_root_translation(
#             skeleton_tree=skeleton,
#              r=global_rotation_1,
#              t=zero_pose.root_translation,
#              is_local=False
#           )
# plot_skeleton_state(new_pose_2)

global_rotation_2 = torch.tensor(
    [[ 0.00000000e+00,  0.00000000e+00,  0.00000000e+00,
         1.00000000e+00],
       [-3.12213063e-01,  5.09600424e-01, -4.18853395e-01,
         6.83660914e-01],
       [-3.63705706e-02, -7.23642741e-01, -6.88786251e-01,
         2.43282783e-02],
       [-5.29130519e-01, -5.12520681e-01, -4.76638960e-01,
        -4.79748630e-01],
       [-8.50457122e-01, -5.24270589e-01,  3.24691010e-02,
         2.84392609e-02],
       [-3.28191016e-01,  4.99459954e-01,  4.40288821e-01,
        -6.70056838e-01],
       [ 6.66871288e-01,  8.11452481e-03,  3.37385812e-02,
        -7.44364526e-01],
       [-5.39894184e-01,  4.86881610e-01,  5.27661198e-01,
        -4.39356607e-01],
       [-5.58363658e-01,  8.26041544e-01,  4.06618422e-02,
         6.50538857e-02],
       [-4.66321739e-01,  8.84615191e-01, -1.08210501e-08,
         2.05275982e-08],
       [ 5.26801899e-01,  4.71677576e-01,  4.88987890e-01,
         5.10774770e-01],
       [-6.90392526e-01,  2.00092239e-01, -1.41627425e-01,
        -6.80634211e-01],
       [-7.21167863e-01, -6.92321124e-01, -3.30704205e-04,
         2.46630343e-02],
       [ 3.89025577e-01,  6.05158107e-01,  3.51810860e-01,
         5.98892215e-01],
       [-4.82628643e-01,  4.99512164e-01,  5.20273998e-01,
        -4.96862312e-01],
       [ 7.15306068e-02, -7.01407875e-01, -7.02020291e-01,
        -1.00388625e-01],
       [-4.92305860e-01,  5.07577544e-01,  5.29864298e-01,
        -4.68234773e-01],
       [ 2.05467089e-01,  6.59237007e-01,  7.05055844e-01,
        -1.61511920e-01],
       [-7.02166409e-01,  7.11632498e-01,  1.66166230e-02,
         1.62914076e-02],
       [ 6.14838744e-01, -3.48694235e-01, -6.19924627e-01,
         3.40703841e-01],
       [ 5.02847328e-01,  4.97524129e-01,  4.95766667e-01,
         5.03815162e-01],
       [ 1.06942332e-01, -6.99948993e-01, -6.96552023e-01,
        -1.15974237e-01]]
)
translation = zero_pose.root_translation
translation += torch.tensor([0, 0, 1.1])
new_pose_3 = SkeletonState.from_rotation_and_root_translation(
            skeleton_tree=skeleton,
             r=global_rotation_2,
             t=translation,
             is_local=False
          )
plot_skeleton_state(new_pose_3)
new_pose_3.to_file("data/stompy_tpose.npy")
breakpoint()
