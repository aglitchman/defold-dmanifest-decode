-- BASED ON https://github.com/JustAPotota/Unfold

local M = {}

-- Modules
local protoc = require("pb.protoc")

-- Set up protoc -----------------
protoc.unknown_module = ""
protoc.unknown_type = ""
protoc.include_imports = true
protoc:load(sys.load_resource("/proto/liveupdate_ddf.proto"))
----------------------------------

function M.read_manifest(data)
    return pb.decode(".dmLiveUpdateDDF.ManifestFile", data)
end

return M
