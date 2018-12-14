##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=TP3
ConfigurationName      :=Debug
WorkspacePath          :=/Users/Jeremie/Git/CppTP3
ProjectPath            :=/Users/Jeremie/Git/CppTP3
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Jeremie Ricard
Date                   :=14/12/2018
CodeLitePath           :="/Users/Jeremie/Library/Application Support/CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="TP3.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/Applications/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/TP3_Voyage.cpp$(ObjectSuffix) $(IntermediateDirectory)/TP3_TransAvion.cpp$(ObjectSuffix) $(IntermediateDirectory)/TP3_TransBase.cpp$(ObjectSuffix) $(IntermediateDirectory)/TP3_TransVdL.cpp$(ObjectSuffix) $(IntermediateDirectory)/TP3_tp3A18.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/TP3_Voyage.cpp$(ObjectSuffix): TP3/Voyage.cpp $(IntermediateDirectory)/TP3_Voyage.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/Jeremie/Git/CppTP3/TP3/Voyage.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP3_Voyage.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP3_Voyage.cpp$(DependSuffix): TP3/Voyage.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP3_Voyage.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TP3_Voyage.cpp$(DependSuffix) -MM TP3/Voyage.cpp

$(IntermediateDirectory)/TP3_Voyage.cpp$(PreprocessSuffix): TP3/Voyage.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP3_Voyage.cpp$(PreprocessSuffix) TP3/Voyage.cpp

$(IntermediateDirectory)/TP3_TransAvion.cpp$(ObjectSuffix): TP3/TransAvion.cpp $(IntermediateDirectory)/TP3_TransAvion.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/Jeremie/Git/CppTP3/TP3/TransAvion.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP3_TransAvion.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP3_TransAvion.cpp$(DependSuffix): TP3/TransAvion.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP3_TransAvion.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TP3_TransAvion.cpp$(DependSuffix) -MM TP3/TransAvion.cpp

$(IntermediateDirectory)/TP3_TransAvion.cpp$(PreprocessSuffix): TP3/TransAvion.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP3_TransAvion.cpp$(PreprocessSuffix) TP3/TransAvion.cpp

$(IntermediateDirectory)/TP3_TransBase.cpp$(ObjectSuffix): TP3/TransBase.cpp $(IntermediateDirectory)/TP3_TransBase.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/Jeremie/Git/CppTP3/TP3/TransBase.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP3_TransBase.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP3_TransBase.cpp$(DependSuffix): TP3/TransBase.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP3_TransBase.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TP3_TransBase.cpp$(DependSuffix) -MM TP3/TransBase.cpp

$(IntermediateDirectory)/TP3_TransBase.cpp$(PreprocessSuffix): TP3/TransBase.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP3_TransBase.cpp$(PreprocessSuffix) TP3/TransBase.cpp

$(IntermediateDirectory)/TP3_TransVdL.cpp$(ObjectSuffix): TP3/TransVdL.cpp $(IntermediateDirectory)/TP3_TransVdL.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/Jeremie/Git/CppTP3/TP3/TransVdL.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP3_TransVdL.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP3_TransVdL.cpp$(DependSuffix): TP3/TransVdL.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP3_TransVdL.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TP3_TransVdL.cpp$(DependSuffix) -MM TP3/TransVdL.cpp

$(IntermediateDirectory)/TP3_TransVdL.cpp$(PreprocessSuffix): TP3/TransVdL.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP3_TransVdL.cpp$(PreprocessSuffix) TP3/TransVdL.cpp

$(IntermediateDirectory)/TP3_tp3A18.cpp$(ObjectSuffix): TP3/tp3A18.cpp $(IntermediateDirectory)/TP3_tp3A18.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/Jeremie/Git/CppTP3/TP3/tp3A18.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TP3_tp3A18.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TP3_tp3A18.cpp$(DependSuffix): TP3/tp3A18.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TP3_tp3A18.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TP3_tp3A18.cpp$(DependSuffix) -MM TP3/tp3A18.cpp

$(IntermediateDirectory)/TP3_tp3A18.cpp$(PreprocessSuffix): TP3/tp3A18.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TP3_tp3A18.cpp$(PreprocessSuffix) TP3/tp3A18.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


