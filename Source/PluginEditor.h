/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class DistortionVstAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    DistortionVstAudioProcessorEditor (DistortionVstAudioProcessor&);
    ~DistortionVstAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
   

	//scoped pointer is just a pointer that is deleted when it goes out of scope this frees up some memory which is very important in audio processing
	ScopedPointer<Slider> driveKnob;
	ScopedPointer<Slider> rangeKnob;
	ScopedPointer<Slider> blendKnob;
	ScopedPointer<Slider> volumeKnob;

	//audio processor value tree state creates an xml that allows you to save the values of the knobs so you can create presets
	ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> driveAttachment;
	ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> rangeAttachment;
	ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> blendAttachment;
	ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> volumeAttachment;

    DistortionVstAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DistortionVstAudioProcessorEditor)
};
