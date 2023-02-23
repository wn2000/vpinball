#pragma once

#include "typedefs3D.h"
class RenderDevice;

class RenderTarget final
{
public:
   RenderTarget(RenderDevice* rd, int width, int height, colorFormat format); // Default output render target
   RenderTarget(RenderDevice* rd, const string& name, const int width, const int height, const colorFormat format, bool with_depth, int nMSAASamples, StereoMode stereo, const char* failureMessage, RenderTarget* sharedDepth = nullptr);
   ~RenderTarget();

   void Activate(bool ignoreStereo = false, bool clear = false);
   static RenderTarget* GetCurrentRenderTarget();
   static int RebindCount;

   Sampler* GetColorSampler() { return m_color_sampler; }
   void UpdateDepthSampler();
   Sampler* GetDepthSampler() { return m_depth_sampler; }

   RenderTarget* Duplicate(const string& name, const bool shareDepthSurface = false);
   void CopyTo(RenderTarget* dest, const bool copyColor = true, const bool copyDepth = true);

   void SetSize(const int w, const int h) { assert(m_is_back_buffer); m_width = w; m_height = h; }
   int GetWidth() const { return m_width; }
   int GetHeight() const { return m_height; }
   StereoMode GetStereo() const { return m_stereo; }
   bool IsMSAA() const { return m_nMSAASamples > 1; }
   bool HasDepth() const { return m_has_depth; }
   colorFormat GetColorFormat() const { return m_format; }

#ifdef _DEBUG
   void SaveToPng(string filename);
#endif

#ifdef ENABLE_SDL
   GLuint GetCoreFrameBuffer() const { return m_framebuffer; }
#else
   IDirect3DSurface9* GetCoreColorSurface() { return m_color_surface; }
#endif

private:
   const string m_name;
   int m_width;
   int m_height;
   colorFormat m_format;
   StereoMode m_stereo;
   RenderDevice* m_rd;
   Sampler* m_color_sampler;
   Sampler* m_depth_sampler;
   bool m_is_back_buffer;
   bool m_has_depth;
   bool m_shared_depth;
   int m_nMSAASamples;
   static RenderTarget* current_render_target;

#ifdef ENABLE_SDL
   static int m_current_stereo_mode;
   GLuint m_framebuffer;
   GLuint m_color_tex;
   GLuint m_depth_tex;
#else
   bool m_use_alternate_depth;
   IDirect3DSurface9* m_color_surface;
   IDirect3DTexture9* m_color_tex;
   IDirect3DSurface9* m_depth_surface;
   IDirect3DTexture9* m_depth_tex;
#endif
};
