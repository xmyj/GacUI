﻿#include "DarkSkinIncludes.h"

namespace vl
{
	namespace presentation
	{
		namespace user_resource
		{
			using namespace collections;
			using namespace stream;
			using namespace controls;

			class DarkSkinResourceReader
			{
			public:
				static const vint parserBufferLength = 1057; // 2536 bytes before compressing
				static const vint parserBufferBlock = 1024;
				static const vint parserBufferRemain = 33;
				static const vint parserBufferRows = 2;
				static const char* parserBuffer[2];

				static void ReadToStream(vl::stream::MemoryStream& stream)
				{
					DecompressStream(parserBuffer, true, parserBufferRows, parserBufferBlock, parserBufferRemain, stream);
				}
			};

			const char* DarkSkinResourceReader::parserBuffer[] = {
				"\xE8\x09\x00\x00\x19\x04\x00\x00\x05\x00\x01\x82\x80\x03\x03\x82\x81\x82\x01\xC4\x2F\x23\x38\x06\x81\x81\x86\x01\xC9\x2E\x33\x34\x39\x32\x37\x31\x65\x06\x0E\x80\x0A\x89\x83\x29\x31\x72\x69\x30\x34\x3D\x03\x8D\x93\x88\x13\x95\x97\x85\x33\x2C\x39\x3C\x36\x65\x0F\x1B\x92\x91\x83\x20\x37\x30\x73\x73\x0E\x21\x3D\x35\x32\x29\x32\x63\x6F\x32\x24\x3B\x88\x02\x01\x8D\x10\x86\x89\xA4\x21\x32\x3B\x35\x29\x6B\x69\x2E\x21\x05\xA3\x8C\x08\xAB\x02\xC2\x38\x85\x3C\x32\xA9\x32\x85\x63\x75\x3D\x8E\x34\x3E\x5F\x8C\xB3\x01\xBC\x20\xBE\x1C\x1B\x23\x36\xB2\x65\x64\xAF\x0C\xBD\x97\x95\x33\x39\x74\xAE\xB0\x80\x1E\x34\x9D\x33\x1E\x22\x23\x04\x25\x36\x31\x31\x3A\x36\x74\x2D\x0F\x36\x35\x32\x39\x90\x32\x65\x22\x2C\xA1\xAC\x32\xA2\x1F\x11\x46\x19\xDA\xDC\x1F\x14\xCA\xCA\xCE\x75\xB0\xB9\xB6\xBC\xBE\xBC\xC1\x11\x53\x5C\x80\xB4\x39\x37\xB6\xC4\xC6\x8E\xE9\x10\xD2\xCC\x1E\xCE\x39\xCB\x9A\x9B\xDD\xCF\x35\xCF\xD8\x1E\x31\x6B\x36\xD7\xD0\x10\x1F\x19\x21\x21\x43\x1C\xC0\xE2\xE0\xD2\xBD\x32\xB6\x2F\x21\xF7\xB0\xEB\xB5\xA3\x05\x8D\xD7\x81\x90\x32\x30\xA7\x35\x36\x38\x69\x30\xA4\x34\xAE\x84\x03\x99\xF3\x35\xB7\xB9\x9B\x9D\x9F\x9D\xA1\xA1\x31\x1B\xA4\x12\xF2\x84\x31\xA7\x35\x73\x51\xAE\x3A\x1A\x1A\x23\x36\x3A\x74\x1E\x7F\x46\x1C\xBC\x6C\x12\x11\x1D\x00\xAF\x54\x15\x19\xDF\x77\x44\x1D\x19\x18\x1B\x41\x85\x40\xF6\x4E\x59\x7E\x54\xFC\x47\x89\x82\x1B\x0B\x8D\x81\x1B\x83\x1A\x1B\x41\x88\x85\xF7\x57\x8B\x7E\x0E\x43\x28\x10\x53\x1A\xFE\x78\x1D\x84\x1C\x0E\xA5\x15\x0B\x46\x33\xA4\x86\x86\x7E\xFC\x69\x8B\x89\x12\x0F\xAD\x1A\x57\x18\x6B\x27\x14\x81\x1D\x6E\x24\x1F\x89\x8C\x23\x86\x49\x91\x85\xF8\x78\x88\x8A\x77\x62\x2F\x1D\x8B\x91\x1F\xA5\x1F\x07\x46\x57\xB6\x8D\x90\x86\x28\xB5\x14\x46\x77\x6E\x64\x54\x80\x1B\x54\x8F\x84\x4E\x41\x67\x8C\x96\x88\x7F\x54\x2A\x8D\x4C\x07\x1B\x70\x9A\x97\x9A\x3A\x0C\x5F\x80\x14\x69\x00\x9D\x61\x99\x56\x98\x95\x7D\x89\x4E\xA0\x52\x59\x5C\x74\x0C\x11\x1A\x18\x5C\x7C\x91\x0B\x46\x8B\xB3\x91\xA3\x42\x83\xA4\x5B\x80\x1E\x74\x13\x9C\x80\x8C\x55\xA0\x0B\x46\xA6\x8E\x9C\x92\xA3\x58\x74\x16\x19\x19\x19\x77\x3B\x97\xA5\x8C\xF3\x4E\x49\xA8\x00\x6A\x8E\x95\x10\x1E\x70\x16\x44\x1A\x54\x67\x03\x6F\x7B\x87\x42\x7C\x99\x93\x40\x4B\x80\xAC\x97\x11\x43\xB0\x16\xA6\x87\x0F\x99\x96\x42\xB1\xAD\x9C\x98\x13\x80\x05\x88\x12\xAC\x4C\x7C\x99\x0B\x46\xB4\x9D\xA7\x8B\xB0\x48\x05\xBA\xA2\x8B\x9F\x37\x8A\xB4\x16\x1C\x61\x3A\x92\x1C\x9F\x9C\x86\x45\xB9\xB2\x27\xBC\x8C\x83\x8F\x41\x83\x95\x90\x9F\x17\x1B\x41\xBD\xB5\xFC\x46\xA8\xA0\x99\xA7\x95\x92\x0B\x46\xFB\xB4\xBA\x0C\x13\x84\x74\x1C\xB0\x1B\x06\x88\x81\x80\x87\xF9\x8F\x86\x0B\x46\x0B\xFE\xBC\x11\x1A\x14\x62\xA4\xAA\x5B\x6C\x22\x5E\x18\x12\x65\x21\x10\x67\xB8\x09\xE5\x1B\xAE\x40\xBD\x9D\xB7\x8B\xC3\x11\xE3\xA7\x1C\x9F\xC6\x83\x48\xB2\xAF\x27\x8D\x11\x5D\x1D\x5A\x72\x1A\x87\xC1\xE4\x9B\xAC\xB7\x96\x2D\xEF\xCA\xBA\x8F\x06\xCA\x8D\xC6\x07\x1B\x40\xDE\xBE\xCB\x6E\x35\x13\x14\x8C\x69\x00\x86\xA8\xB1\x91\x7C\xB7\xCC\x9D\x4D\x07\x6C\x69\x57\x6E\x25\x13\xA5\xA5\x6F\x2E\x8D\xC5\x07\x1B\x5C\xDE\xBF\x76\x6F\x02\x97\x5F\x1C\x31\xFC\x9E\xD6\x41\x67\xE8\xBC\x7E\x14\x1A\xED\x63\xCE\xCF\x4C\xE3\x0B\x46\xDC\xFE\x92\x19\x1B\x19\x68\x02\xC8\xB4\xC1\x6F\xC8\xCC\xD2\x9C\x06\x40\xEA\xDA\x0E\x03\xEC\x12\xC7\xC9\x5B\xDD\xDF\xD2\x93\x53\x28\x12\x50\x1D\x61\x74\x1B\x11\x19\x79\x3C\x94\xDE\x41\x97\xC3\xE3\x14\xAD\x30\x54\xD6\xD5\x19\x94\x83\xB8\xA7\x83\x67\xC3\x49\xD8\xCB\x6C\x87\xA4\x10\x81\x70\x24\x1F\x1B\x1D\x7E\xE3\xE5\x1B\x06\x1B\x74\xEE\xBC\x15\x87\x98\xCA\xC7\xD2\xB2\xD5\x0B\x46\xEF\xB7\xC7\xAA\xB6\x43\x21\xF8\xCC\x98\xE8\x85\x90\xC4\x1C\x9F\x35\x86\x4D\xF3\xE0\x54\x2F\x1C\x6C\x45\x21\x70\x17\xD1\x57\x74\x01\x1E\x63\xEB\x8A\x8C\xAB\xE0\x97\xD1\xD3\xF4\x1D\xF5\x7D\xFC\x99\x0B\x46\xE7\xF7\xE2\xF4\x1B\xD4\xE2\x4B\xEB\x1B\xAD\xEF\xEE\x19\xF9\x1D\xE9\xC2\x43\xCA\x22\xEC\x9B\xF9\xFB\x70\x04\xD5\x1C\x9F\x0D\x66\x21\x00\xD0\x7B\x7F\xF1\x62\x27\x7A\x49\x74\x7D\xDC\x73\x6F\x7B\x13\x61\x7C\x7D\x06\x96\x78\xD2\x4A\x6C\x62\xA6\x76\x76\x20\x17\x84\x82\xF8\x55\x71\x5B\x69\x4D\x82\x7F\xBC\x2C\x34\x1C\x5D\x7E\x21\x46\x6C\x50\x75\x3A\x11\x7A\xF5\x7B\x65\x61\x0D\x43\x7A\x49\x1F\x89\x84\x77\x65\x07\x70\x94\x7E\x4E\x5F\x56\x05\x72\xB3\x45\x40\x5B\x8E\x54\x5E",
				"\x20\x3F\x83\x71\x0E\xAC\x8F\x84\x5E\x71\x86\x0A\xDF\x41\x5F\x1A\x3C\x71\x47\x09\x46\x26\x89\x83\x77\x0A\x54\x2E\x78\x70\xA6\x45\x28",
				};

			class DarkSkinResourceLoaderPlugin : public Object, public IGuiPlugin
			{
			public:

				GUI_PLUGIN_NAME(GacGen_DarkSkinResourceLoader)
				{
					GUI_PLUGIN_DEPEND(GacUI_Res_Resource);
					GUI_PLUGIN_DEPEND(GacUI_Res_TypeResolvers);
#ifndef VCZH_DEBUG_NO_REFLECTION
					GUI_PLUGIN_DEPEND(GacUI_Instance_Reflection);
					GUI_PLUGIN_DEPEND(GacUI_Compiler_WorkflowTypeResolvers);
#endif
				}

				void Load()override
				{
					List<GuiResourceError> errors;
					MemoryStream resourceStream;
					DarkSkinResourceReader::ReadToStream(resourceStream);
					resourceStream.SeekFromBegin(0);
					auto resource = GuiResource::LoadPrecompiledBinary(resourceStream, errors);
					GetResourceManager()->SetResource(L"DarkSkin", resource, GuiResourceUsage::InstanceClass);
				}

				void Unload()override
				{
				}
			};
			GUI_REGISTER_PLUGIN(DarkSkinResourceLoaderPlugin)
		}
	}
}