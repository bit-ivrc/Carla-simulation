# Carla-simulation
Development and maintenance of the Carla simulation environment
# **Carla仿真环境开发与维护**

版本：V20190918

涉及人员：杨磊，王威，于洋，龚乘，李子睿，实验室本科生

关于Carla仿真环境的开发和维护主要有以下几个方面：

#### 一． 规划模块接口开发

Carla官方提供的接口较为有限，尤其是在地图层面开发的不是很完善。这部分应该是杨磊师兄在开发。

#### 二． 机器学习算法接口

现阶段carla本身提供了深度学习和强化学习的Demo，但是其本身的开发并不完善 ，后续可以考虑形成一个比较完善的框架，可以快速修改从环境中得到的信息，同时，可以按照模板快速更换学习算法，加速开发。（和gym、openai结合）

#### 三． 实车接口开发

现阶段carla本身没有和实车完全一致的接口，后期可以逐步开发一个和Vrep类似的接口，用于实车实验。（可以参考vrep实车接口的开发）

#### 四． 场景复建

算法验证一般不是全范围城市场景中进行验证，因此，针对特定的场景，比如，十字路口（但是十字路口本身也有很多种），可以对本科生进行分工，维护一个场景库，可以自由快速的添加车辆，这样我们的算法就可以在多个场景中进行验证。

#### 五． 真实场景复现

仿真场景不一定能满足算法验证需求，但是又难以进行实车试验，在这种情况下，可以考虑将真实场景以数据驱动的模型方式进行体现，在仿真中进行复现，同时，利用算法控制仿真环境中车辆的控制。

#### 七、形成一个学习手册，规定维护记录，版本记录

#### 八、新生入门培训、本科生课题参与、协助老师课程建设

#### 九、积极组织参与Carla挑战赛

------



# Development and maintenance of Carla simulation environment

Version: V20190918

Involved personnel: Yang lei, Wang Wei, Yu Yang, Gong Cheng, Li Zirui, laboratory undergraduates

The development and maintenance of Carla simulation environment mainly includes the following aspects:

#### 1.Planning module interface development

Carla's official interface is relatively limited, especially at the map level. Yang lei should be currently developing this part.

#### 2.Machine learning algorithm interface

At present, Carla provides Demos of deep learning and reinforcement learning, but the development is not yet perfect. Later, it should be considered to contract better framework, where the information obtained from the environment can be quickly modified . What's more, it is expected that  the learning algorithm can be changed quickly using templates so as to speed up the development. (which can be combined with gym and openAI)

#### 3.Real car interface development

At present stage, Carla does not have the same interface with the real car. Later, we can develop an interface similar to Vrep for the real car experiment. (refer to the development of Vrep real car interface)

#### 4.Scenario building

Algorithm validations usually are not under a full range of general urban scenario. Therefore, for a particular scene, for example, a crossroads(where there are also many types of crossroads), the undergraduates can be designated for maintaining a scene where vehicles can be quickly added. And our algorithm can be used in multiple scenarios for validation.

#### 5.Real scenes reappear

The simulation scene may not meet the requirements of algorithm verification, but it is difficult to carry out real car test. In this case, the real scene can be reflected in the way of data-driven model and reproduced in the simulation. At the same time, the algorithm can be used to control the vehicle in the simulation environment.

#### 7. Form a tutorial with maintenance record and version record

#### 8. Freshman orientation training, undergraduate project participation, and assistance in curriculum construction

#### 9. Actively participate in the Carla AD Challenge
