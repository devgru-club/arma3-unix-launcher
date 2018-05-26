#ifndef __STEAM_HPP
#define __STEAM_HPP

#include <string>
#include <vector>

class Steam
{
    public:
        Steam() = delete;
        Steam(std::vector<std::string> search_paths = {"$HOME/.local/share/Steam", "$HOME/.steam/steam"});

        const std::string &GetSteamPath() noexcept;
        std::vector<std::string> GetInstallPaths();

    private:
        std::string steam_path_;
        std::string config_path_ = "/config/config.vdf";
};

#endif
