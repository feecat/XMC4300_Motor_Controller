<?xml version="1.0" encoding="ASCII"?>
<ResourceModel:App xmi:version="2.0" xmlns:xmi="http://www.omg.org/XMI" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:ResourceModel="http://www.infineon.com/Davex/Resource.ecore" name="PWM_CCU4" URI="http://resources/4.1.26/app/PWM_CCU4/0" description="PWM APP using one timer slice of CCU4, with external events support, to generate a PWM output." mode="NOTSHARABLE" version="4.1.26" minDaveVersion="4.3.2" instanceLabel="PWM_0" appLabel="" containingProxySignal="true">
  <properties provideInit="true"/>
  <virtualSignals name="CCU4_global_signal" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_global_signal" hwSignal="global_signal" hwResource="//@hwResources.0"/>
  <virtualSignals name="event_cmp_match" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_compare_match_interrupt" hwSignal="cmds_cmus" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="event_period_match" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_period_match_interrupt" hwSignal="pmus_omds" hwResource="//@hwResources.0" required="false"/>
  <virtualSignals name="event_0" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_event0_interrupt" hwSignal="e0as" hwResource="//@hwResources.0" required="false"/>
  <virtualSignals name="event_1" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_event1_interrupt" hwSignal="e1as" hwResource="//@hwResources.0" required="false"/>
  <virtualSignals name="event_2" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_event2_interrupt" hwSignal="e2as" hwResource="//@hwResources.0" required="false"/>
  <virtualSignals name="timer_st" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_st" hwSignal="st" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="pwm_output" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_channel_out_signal" hwSignal="out" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="ext_event0" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_gp0_unsync" hwSignal="gp0_unsync" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="ext_event1" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_gp1_unsync" hwSignal="gp1_unsync" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="ext_event2" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_gp2_unsync" hwSignal="gp2_unsync" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="gp0" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_gp0" hwSignal="gp0" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="gp1" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_gp1" hwSignal="gp1" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="gp2" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_gp2" hwSignal="gp2" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="ps" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_ps" hwSignal="ps" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="mci_input" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_mci" hwSignal="mci" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="mcss_input" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_mcss" hwSignal="mcss" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="PWM_CCU4 Channel Out" URI="http://resources/4.1.26/app/PWM_CCU4/0/vs_port_channel_out" hwSignal="pad" hwResource="//@hwResources.1"/>
  <virtualSignals name="PWM_CCU4 Channel Out_signal" URI="http://resources/4.1.26/app/PWM_CCU4/0/__pin_vs_port_channel_out" hwSignal="pin" hwResource="//@hwResources.2"/>
  <requiredApps URI="http://resources/4.1.26/app/PWM_CCU4/0/pwm_ccu4_app_global_ccu4_cc4" requiredAppName="GLOBAL_CCU4" requiringMode="SHARABLE">
    <downwardMapList xsi:type="ResourceModel:App" href="../../GLOBAL_CCU4/v4_1_12/GLOBAL_CCU4_0.app#/"/>
  </requiredApps>
  <hwResources name="CC4 Config" URI="http://resources/4.1.26/app/PWM_CCU4/0/hwres_ccu4_cc4_slice" resourceGroupUri="peripheral/ccu4/*/cc4/*" mResGrpUri="peripheral/ccu4/*/cc4/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/ccu41/ccu41_1.dd#//@provided.0"/>
  </hwResources>
  <hwResources name="PWM_CCU4 Channel Out" URI="http://resources/4.1.26/app/PWM_CCU4/0/hwres_port_channel_out" resourceGroupUri="port/p/*/pad/*" mResGrpUri="port/p/*/pad/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/port2/port2_2.dd#//@provided.29"/>
  </hwResources>
  <hwResources name="PWM_CCU4 Channel Out" URI="http://resources/4.1.26/app/PWM_CCU4/0/__pin_hwres_port_channel_out" resourceGroupUri="devicepackage/0/50" constraintType="GLOBAL_RESOURCE" mResGrpUri="devicepackage/0/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/DEVICEPACKAGE/DEVICEPACKAGE_0.dd#//@provided.43"/>
  </hwResources>
  <connections URI="http://resources/4.1.26/app/PWM_CCU4/0/http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_global/http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_global_signal" systemDefined="true" sourceSignal="ccu4_global" targetSignal="CCU4_global_signal" targetVirtualSignal="//@virtualSignals.0" proxySrcVirtualSignalUri="http://resources/4.1.12/app/GLOBAL_CCU4/0/vs_global_ccu4_globalsignal" containingProxySignal="true">
    <downwardMapList xsi:type="ResourceModel:VirtualSignal" href="../../GLOBAL_CCU4/v4_1_12/GLOBAL_CCU4_0.app#//@virtualSignals.0"/>
    <srcVirtualSignal href="../../GLOBAL_CCU4/v4_1_12/GLOBAL_CCU4_0.app#//@virtualSignals.0"/>
  </connections>
  <connections URI="http://resources/4.1.26/app/PWM_CCU4/0/http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_global_sync_start/http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_gp0_unsync" systemDefined="true" sourceSignal="ccu4_global_start" targetSignal="ext_event0" required="false" targetVirtualSignal="//@virtualSignals.8" proxySrcVirtualSignalUri="http://resources/4.1.12/app/GLOBAL_CCU4/0/vs_global_ccu4_gsc_enable" containingProxySignal="true">
    <srcVirtualSignal href="../../GLOBAL_CCU4/v4_1_12/GLOBAL_CCU4_0.app#//@virtualSignals.2"/>
  </connections>
  <connections URI="http://resources/4.1.26/app/PWM_CCU4/0/http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_global_sync_start/http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_gp1_unsync" systemDefined="true" sourceSignal="ccu4_global_start" targetSignal="ext_event1" required="false" targetVirtualSignal="//@virtualSignals.9" proxySrcVirtualSignalUri="http://resources/4.1.12/app/GLOBAL_CCU4/0/vs_global_ccu4_gsc_enable" containingProxySignal="true">
    <srcVirtualSignal href="../../GLOBAL_CCU4/v4_1_12/GLOBAL_CCU4_0.app#//@virtualSignals.2"/>
  </connections>
  <connections URI="http://resources/4.1.26/app/PWM_CCU4/0/http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_global_sync_start/http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_gp2_unsync" systemDefined="true" sourceSignal="ccu4_global_start" targetSignal="ext_event2" required="false" targetVirtualSignal="//@virtualSignals.10" proxySrcVirtualSignalUri="http://resources/4.1.12/app/GLOBAL_CCU4/0/vs_global_ccu4_gsc_enable" containingProxySignal="true">
    <srcVirtualSignal href="../../GLOBAL_CCU4/v4_1_12/GLOBAL_CCU4_0.app#//@virtualSignals.2"/>
  </connections>
  <connections URI="http://resources/4.1.26/app/PWM_CCU4/0/http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_channel_out_signal/http://resources/4.1.26/app/PWM_CCU4/0/vs_port_channel_out" systemDefined="true" sourceSignal="pwm_output" targetSignal="PWM_CCU4 Channel Out" srcVirtualSignal="//@virtualSignals.7" targetVirtualSignal="//@virtualSignals.17"/>
  <connections URI="http://resources/4.1.26/app/PWM_CCU4/0/http://resources/4.1.26/app/PWM_CCU4/0/vs_port_channel_out/http://resources/4.1.26/app/PWM_CCU4/0/__pin_vs_port_channel_out" systemDefined="true" sourceSignal="PWM_CCU4 Channel Out" targetSignal="PWM_CCU4 Channel Out_signal" srcVirtualSignal="//@virtualSignals.17" targetVirtualSignal="//@virtualSignals.18"/>
  <connections URI="http://resources/4.1.26/app/PWM_CCU4/0/http://resources/4.1.26/app/PWM_CCU4/0/__pin_vs_port_channel_out/http://resources/4.1.26/app/PWM_CCU4/0/vs_port_channel_out" systemDefined="true" sourceSignal="PWM_CCU4 Channel Out_signal" targetSignal="PWM_CCU4 Channel Out" srcVirtualSignal="//@virtualSignals.18" targetVirtualSignal="//@virtualSignals.17"/>
  <connections URI="http://resources/4.1.26/app/PWM_CCU4/0/http://resources/4.1.26/app/PWM_CCU4/0/vs_ccu4_cc4_compare_match_interrupt/http://resources/4.0.8/app/INTERRUPT/3/vs_nvic_signal_in" sourceSignal="event_cmp_match" targetSignal="sr_irq" srcVirtualSignal="//@virtualSignals.1">
    <downwardMapList xsi:type="ResourceModel:VirtualSignal" href="../../INTERRUPT/v4_0_8/INTERRUPT_3.app#//@virtualSignals.0"/>
    <targetVirtualSignal href="../../INTERRUPT/v4_0_8/INTERRUPT_3.app#//@virtualSignals.0"/>
  </connections>
</ResourceModel:App>
