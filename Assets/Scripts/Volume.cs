using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Audio;
//включение, выключение, звуков и музыки
public class Volume : MonoBehaviour
{
    private IVolume music, sound;
    public GameObject btnMusicOn, btnMusicOff, btnSoundOn, btnSoundOff;
    public string tagVolumeMusic, tagVolumeSound;
    public string tagMixerMusic, tagMixerSound;
    public AudioSource audSetting;
    public AudioMixerGroup mixerMusic, mixerSound;
    // Start is called before the first frame update
    void Start()
    {
        music = new IVolume(tagVolumeMusic, tagMixerMusic, btnMusicOn, btnMusicOff, mixerMusic);
        sound = new IVolume(tagVolumeSound, tagMixerSound, btnSoundOn, btnSoundOff, mixerSound);
    }

    public void ClickMusicOn(){
        audSetting.Play();
        music.ClickOn();
    }

    public void ClickMusicOff(){
        audSetting.Play();
        music.ClickOff();
    }


    public void ClickSoundOn(){
        audSetting.Play();
        sound.ClickOn();
    }

    public void ClickSoundOff(){
        audSetting.Play();
        sound.ClickOff();
    }

}

public class IVolume
{
    private LoadResources flagVolume;
    private string keysVolume;
    private string keysMixer;
    private GameObject btnVolumeOn;
    private GameObject btnVolumeOff;
    private AudioMixerGroup mixer;
    public IVolume(string keysVolume, string keysMixer, GameObject btnVolumeOn, GameObject btnVolumeOff, AudioMixerGroup mixer)
    {
        this.keysVolume = keysVolume;
        this.keysMixer = keysMixer;
        this.btnVolumeOn = btnVolumeOn;
        this.btnVolumeOff = btnVolumeOff;
        this.mixer = mixer;
        
        flagVolume = new LoadResources(this.keysVolume);

        if(flagVolume.Resources == 0)
        {
            Off();
        }
        else
        {
            On();
        }
    }

    public void ClickOn()
    {
        flagVolume.Resources = 1;
        On();
    }

    public void ClickOff()
    {
        flagVolume.Resources = 0;
        Off();
    }

    private void On()
    {
        mixer.audioMixer.SetFloat(keysMixer, -80);
        flagVolume.SaveIntResources();
        btnVolumeOn.SetActive(false);
        btnVolumeOff.SetActive(true);

    }

    private void Off()
    { 
        mixer.audioMixer.SetFloat(keysMixer, 0);
        flagVolume.SaveIntResources();
        btnVolumeOn.SetActive(true);
        btnVolumeOff.SetActive(false);
    }
}
